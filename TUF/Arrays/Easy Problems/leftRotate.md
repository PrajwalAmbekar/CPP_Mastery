Problem: Left Rotate an Array by One Position – Understanding My Logic vs Optimized Logic

I tried to solve the problem of left rotating an array by one position.  
Left rotation by one means every element shifts one position to the left, and the first element moves to the last position.

Example:
Input array:  [1, 2, 3, 4, 5]  
After left rotation: [2, 3, 4, 5, 1]

---

My Initial Approach (What I Wrote)

I used a loop and kept swapping adjacent elements:

for (int i = 0; i < n-1; i++) {
    int temp = arr[i+1];
    arr[i+1] = arr[i];
    arr[i] = temp;
}

What I Thought:
I thought swapping consecutive elements would rotate the array to the left.

What Actually Happens:
This logic repeatedly swaps neighboring elements, which does not preserve the original order correctly.

Dry Run Example:
Input: [1, 2, 3, 4]

i = 0 → swap(1,2) → [2, 1, 3, 4]  
i = 1 → swap(1,3) → [2, 3, 1, 4]  
i = 2 → swap(1,4) → [2, 3, 4, 1]

This looks correct for this case, but the logic is misleading:
- It relies on multiple swaps
- It is not a clean or general rotation logic
- It becomes confusing to reason about
- It is not the standard approach expected in interviews

So while it may appear to work for some cases, it is not conceptually correct or safe to rely on.

---

Correct and Optimized Approach (Conceptual Explanation)

The correct idea for left rotation by one is very simple:

1. Store the first element in a temporary variable.
2. Shift all remaining elements one position to the left.
3. Place the stored element at the last index.

This directly matches the definition of left rotation.

---

Optimized Logic Explanation (AI Version)

int temp = arr[0];        // save first element

for(int i = 1; i < n; i++)
    arr[i-1] = arr[i];   // shift elements left

arr[n-1] = temp;         // place first element at the end

Why This Works:
- No unnecessary swaps
- Each element is moved exactly once
- Logic is clean and predictable
- Easy to dry run and debug

---

Dry Run of Optimized Approach

Input: [1, 2, 3, 4, 5]

temp = 1  

Shift loop:
i = 1 → arr[0] = 2 → [2, 2, 3, 4, 5]  
i = 2 → arr[1] = 3 → [2, 3, 3, 4, 5]  
i = 3 → arr[2] = 4 → [2, 3, 4, 4, 5]  
i = 4 → arr[3] = 5 → [2, 3, 4, 5, 5]  

Place temp:
arr[4] = 1 → [2, 3, 4, 5, 1]

Correct result achieved.

---

Time Complexity

Both approaches:
O(n) – single traversal of the array

---

Space Complexity

O(1) – no extra array used, only one temporary variable

---

Key Learnings

- Left rotation is not about swapping adjacent elements repeatedly.
- Rotation is about preserving relative order while shifting positions.
- Always match your code logic with the problem definition.
- The optimized approach is cleaner, safer, and interview-acceptable.

---

Final Takeaway

My approach was an experimental swap-based solution, but the optimized approach directly implements the definition of left rotation.  
For clarity, correctness, and interviews, the optimized shifting method should always be used.
