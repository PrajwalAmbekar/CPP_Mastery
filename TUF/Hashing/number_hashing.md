Problem: Frequency Counting Using Hashing (Number Hashing)

Problem Statement  
Given an array of integers and multiple query values, determine how many times each query value appears in the array.

This problem introduces the concept of hashing to optimize frequency counting.

---

Input  
Enter the number of elements: 5  
Enter the elements: 1 3 2 1 3  
Enter the number of query elements: 3  
Enter the query elements: 1 2 4  

---

Output  
Frequency of 1 is: 2  
Frequency of 2 is: 1  
Frequency of 4 is: 0  

---

My Initial Brute Force Approach  
Initially, I tried solving this problem using nested loops.

Logic I used:
- For each query element Q[i]
- Traverse the entire array arr[]
- If arr[j] == Q[i], increment count

This approach worked logically, but it required:
- One loop for queries
- One loop for array traversal

This resulted in a time complexity of O(n × m), which in worst case behaves like O(n²).

---

Why Brute Force Is Inefficient  
- Repeated scanning of the array for each query
- Same computations done again and again
- Slow for large inputs

This made me realize the need for a better approach.

---

Optimized Approach Using Hashing  
Instead of counting repeatedly, I used a hash table to pre-store frequencies.

Steps:
1. Create a hash table (array) where index represents the number.
2. Traverse the input array once and increment the frequency:
   hashTable[arr[i]]++
3. For each query, directly access:
   hashTable[q[i]]

This reduces repeated work and speeds up query answering.

---

Hashing Logic Used  
- Hash table is initialized with 0 values.
- Each array element is mapped to its index.
- The value at that index stores the frequency.

Example:
arr = [1, 3, 2, 1, 3]

After hashing:
hashTable[1] = 2  
hashTable[2] = 1  
hashTable[3] = 2  

---

Important Observations About Hash Table Size  

Number Hashing:
- Inside main function: safe size ≈ 10^6
- Global declaration: safe size ≈ 10^7

Character Hashing:
- Fixed size of 256 (ASCII characters)

Choosing correct size is important to avoid memory issues.

---

Time and Space Complexity  

Brute Force:
- Time Complexity: O(n²)
- Space Complexity: O(1)

Hashing Approach:
- Preprocessing Time: O(n)
- Query Time: O(1) per query
- Total Time: O(n + m)
- Space Complexity: O(maxValueRange)

---

Common Mistake to Avoid  
- Printing hashTable directly prints its address, not contents.
- Hash table indices must be within valid range.
- Always initialize hash table with 0.

---

What I Learned  
- Hashing converts repeated computation into constant-time lookup.
- Pre-store results to optimize queries.
- Correct hash table size is critical.
- Hashing is the foundation for many advanced data structures.
- Time–space tradeoff is a key concept in DSA.
