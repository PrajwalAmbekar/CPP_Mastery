# Problem: Find the Largest Element in an Array

## Problem Statement
Given an array of integers, find and print the largest element present in the array.

---

## Input
- An integer `n` representing the number of elements
- An array of `n` integers entered by the user

---

## Output
- Print the largest element in the array

---

## My Approach (How I Thought About It)

I solved this problem in one go without breaking it into multiple ideas.

First, I assumed that the first element of the array is the largest.  
Then I traversed the array from the second element onwards and compared each element with the current largest value.

If any element was greater than the stored largest value, I updated the largest variable.

After completing the traversal, the value stored in `largest` is guaranteed to be the maximum element because it has been compared against all other elements.

---

## Algorithm Steps

1. Read the number of elements `n`
2. Read `n` elements into the array
3. Initialize `largest` with the first element of the array
4. Traverse the array from index `1` to `n-1`
5. If `arr[i] > largest`, update `largest`
6. Print the value of `largest`

---

## Example Dry Run

Input:  
n = 5  
Array = 3 7 2 9 4  

Step-by-step execution:
- Initialize `largest = 3`
- Compare with 7 → update `largest = 7`
- Compare with 2 → no change
- Compare with 9 → update `largest = 9`
- Compare with 4 → no change

Final Output:
9

---

## Time Complexity
O(n)  
Each element is visited exactly once.

---

## Space Complexity
O(1)  
Only one extra variable is used.

---

## Key Observations

- No sorting is required
- One traversal is sufficient
- Initializing with the first element avoids unnecessary checks
- This is the most optimal approach for this problem

---

## Final Conclusion

This problem can be solved efficiently using a single pass through the array.  
The logic is simple, optimal, and suitable for interviews as well as real-world usage.
