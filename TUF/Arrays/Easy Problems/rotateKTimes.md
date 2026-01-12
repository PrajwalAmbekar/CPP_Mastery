Problem: Rotate an Array to the Right by K Positions – My Brute Force Logic vs Optimized Logic

I worked on the problem of rotating an array to the right by `k` positions.  
Right rotation means that in each rotation, the **last element moves to the front**, and all other elements shift one position to the right.

Example:
Array = [1, 2, 3, 4, 5]  
k = 2  
Result = [4, 5, 1, 2, 3]

This file explains:
- My brute force approach (using while loop and shifting)
- Why it works but is inefficient
- The optimized approach using reverse logic
- Comparison between both approaches

---

My Approach (Brute Force Using Shifting)

Logic I Used:
- Repeat the rotation process `k` times
- In each rotation:
  1. Store the last element
  2. Shift all elements one position to the right
  3. Place the stored element at index 0

Core Code Logic:
- While `k > 0`
  - Save `arr[n-1]` as `last`
  - Shift elements from right to left
  - Assign `arr[0] = last`
  - Decrement `k`

Why This Works:
- Each iteration performs exactly one right rotation
- Repeating it `k` times gives the correct result

Dry Run Example:
Array = [1, 2, 3, 4]
k = 2

First rotation:
last = 4  
Shift → [1, 1, 2, 3]  
Place last → [4, 1, 2, 3]

Second rotation:
last = 3  
Shift → [4, 4, 1, 2]  
Place last → [3, 4, 1, 2]

Final result:
[3, 4, 1, 2]

Time Complexity:
- Each rotation takes O(n)
- Total time = O(n * k)

Space Complexity:
- O(1) extra space (in-place)

Problem With This Approach:
- Very slow when `k` is large
- If `k` ≈ `n`, performance degrades badly
- Not optimal for interviews or large inputs

---

Optimized Approach (Reverse Method)

Key Observation:
Right rotation by `k` can be done using **three reversals**.

Steps:
1. Reduce k using `k = k % n` (to avoid unnecessary rotations)
2. Reverse the entire array
3. Reverse the first `k` elements
4. Reverse the remaining `n-k` elements

Why Reverse Works:
Reversing rearranges the array in a way that places the rotated elements in correct order without repeated shifting.

Dry Run Example:
Array = [1, 2, 3, 4, 5]
k = 2

Step 1: Reverse whole array
[5, 4, 3, 2, 1]

Step 2: Reverse first k elements
[4, 5, 3, 2, 1]

Step 3: Reverse remaining elements
[4, 5, 1, 2, 3]

Correct result achieved.

Time Complexity:
- O(n) (each element reversed a constant number of times)

Space Complexity:
- O(1) extra space (in-place)

---

Comparison of Both Approaches

My Brute Force Approach:
- Easy to think and implement
- Uses repeated shifting
- Time complexity: O(n * k)
- Not efficient for large k

Optimized Reverse Approach:
- Requires deeper understanding
- Uses mathematical observation
- Time complexity: O(n)
- Best and interview-accepted solution

---

Key Learnings

- Brute force solutions help in understanding the problem
- Optimization often comes from mathematical insight
- Repeated operations should always raise a time complexity concern
- Using reverse is a powerful array manipulation trick

---

Final Takeaway

My solution is logically correct but inefficient.
The optimized reverse-based solution is clean, fast, and scalable.

This problem clearly shows the difference between a working solution and an optimal solution.
