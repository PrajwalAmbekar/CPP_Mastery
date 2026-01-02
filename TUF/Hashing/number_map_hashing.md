Problem: Frequency Counting Using map and unordered_map

Problem Statement  
Given an array of integers, count the frequency of each element using associative containers in C++.

This problem introduces the use of:
- map (ordered map)
- unordered_map (hash-based map)

and explains why and when they are preferred over simple hash arrays.

---

Input  
Enter the size of the array: 5  
Enter the elements of array: 1 3 2 1 3  

---

Output  
1 -> 2  
2 -> 1  
3 -> 2  

---

Why I Did NOT Use a Normal Hash Array  
In normal hashing using arrays:
- We must predefine the size of the hash table.
- The size depends on the maximum possible value in the input.
- This can waste memory or cause issues if values are large or unknown.

Example problems with hash arrays:
- Large value range (like 10^9)
- Negative numbers
- Dynamic input where range is not known beforehand

---

Why map Is Useful  
map stores data as key–value pairs.

Key advantages:
- No need to define array size in advance
- Automatically handles large values
- Works for negative numbers
- Keys are stored in sorted order

Internal working:
- map is implemented using a balanced binary search tree (Red-Black Tree)

Time complexity:
- Insertion: O(log n)
- Search: O(log n)
- Traversal gives sorted order

---

Why unordered_map Is Preferred Over map  
unordered_map is implemented using hashing.

Key advantages:
- Faster than map for most use cases
- Average time complexity is O(1) for insert and search
- No need to worry about value range
- Best choice when order of keys is NOT required

This is why unordered_map is generally preferred for frequency counting problems.

---

Worst Case Time Complexity Explanation  
unordered_map can degrade to O(n) in the worst case.

Reason:
- Hash collisions
- Multiple keys map to the same bucket
- All elements go into one bucket, behaving like a linked list

Worst case happens due to:
- Poor hash function
- Adversarial input

Despite this, unordered_map is still preferred because:
- Worst case is rare
- Average case is very fast
- Modern C++ implementations use good hash functions

---

unordered_map Initialization and Usage Example  

Include header:
#include <unordered_map>

Initialization:
unordered_map<int, int> mpp;

Precomputation:
for each element x in array  
    mpp[x]++

Fetching frequencies:
for each pair in mpp  
    print key and value

---

Comparison Summary  

Hash Array:
- Fast
- Needs fixed size
- Limited by value range

map:
- Ordered
- O(log n) operations
- No size issues
- More overhead

unordered_map:
- Unordered
- Average O(1) operations
- Best for frequency counting
- Worst case O(n) due to collisions

---

What I Learned  
- map uses trees and keeps keys sorted
- unordered_map uses hashing and is faster in practice
- Hash arrays are limited by value range
- unordered_map is best for frequency problems when order does not matter
- Worst case in hashing happens due to collisions
