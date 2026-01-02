Problem: Find Highest and Lowest Frequency Elements Using unordered_map

Problem Statement  
Given an array of integers, find:
- The element with the highest frequency
- The element with the lowest frequency

This problem uses hashing with unordered_map to efficiently count frequencies and determine required elements.

---

Input  
Enter the array size: 6  
Enter the array elements: 1 2 2 3 3 3  

---

Output  
The highest frequency number/element in array is: 3  
The lowest frequency number/element in array is: 1  

---

My First Approach (Two-Pass Logic Using map)  
Initially, I solved this problem using an ordered map.

Steps I followed:
1. Used map to store frequency of each element.
2. Initialized two variables:
   - maxFreq
   - minFreq
   using the frequency values (not keys).
3. Traversed the map once to find maxFreq and minFreq.
4. Traversed the map again:
   - If it.second == maxFreq, stored it.first as max element.
   - If it.second == minFreq, stored it.first as min element.

This approach works correctly.

---

Drawback of My First Approach  
- Requires two full traversals of the map.
- Uses extra temporary variables.
- Slightly more space and logic complexity.
- Still has same asymptotic time complexity.

---

Optimized Approach (Single Pass Using unordered_map)  
In the current solution, I improved the logic by:
- Using unordered_map for faster average lookup.
- Determining max and min frequency elements in a single traversal.

Logic:
- While iterating through the map:
  - Compare current frequency with maxFreq and minFreq.
  - Update both frequency and corresponding element immediately.

This avoids an extra traversal.

---

Why unordered_map Instead of map  
unordered_map advantages:
- Average time complexity O(1) for insert and search.
- No need to maintain sorted order.
- Best choice for frequency-based problems.

map disadvantages:
- Uses tree structure.
- O(log n) time per operation.
- Slower for large inputs when order is not required.

---

Worst Case in unordered_map  
Worst case time complexity becomes O(n) due to hash collisions.

Collision happens when:
- Multiple keys map to the same hash bucket.
- All elements land in a single bucket.

Despite this:
- Worst case is rare.
- Average case performance is excellent.
- unordered_map is preferred in competitive programming.

---

Time and Space Complexity  

Using unordered_map:
- Time Complexity:
  - Precomputation: O(n)
  - Traversal: O(k) where k is number of unique elements
- Space Complexity: O(k)

First Approach (two-pass):
- Time Complexity: O(n + k)
- Space Complexity: O(k) + extra variables

Optimized Approach (single-pass):
- Time Complexity: O(n + k)
- Space Complexity: O(k)

---

What I Learned  
- unordered_map is ideal for frequency counting.
- Tracking max and min in a single traversal is cleaner.
- Using keys directly avoids extra loops.
- Hashing trades space for speed.
- Worst case in hashing is caused by collisions.
