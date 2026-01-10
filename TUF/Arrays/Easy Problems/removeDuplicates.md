Problem: Remove Duplicates from a Sorted Array – Understanding Why My Logic Failed and Why Two-Pointer Works

I tried to solve the problem of removing duplicates from a sorted array in-place. My goal was to ignore duplicate elements by making their positions “empty” and only keep unique elements. However, this approach failed due to misunderstandings about how arrays work in C++.

The actual problem is:
Given a sorted array, remove duplicates in-place and return the count of unique elements. The array should be modified such that the first k elements are unique.

Important constraint:
Arrays in C++ have fixed size. There is no concept of deleting elements or making a position empty.

My Initial Idea:
I thought I could detect duplicates and leave gaps (empty spaces) where duplicates appear. Later, I planned to fill those gaps with unique values.

Why This Idea Is Wrong:
1. Arrays cannot have empty spaces.
   Every index in an array always contains some value.
   There is no “null” for int arrays.

2. I tried to use `null` for integers.
   This is invalid in C++ because `null` does not exist for int.

3. I confused values with indices.
   I stored a value in `prev` and later used it like an index (arr[prev]), which is logically incorrect.

4. I accessed out-of-bounds elements.
   Using arr[i+1] when i == n-1 causes undefined behavior.

5. I used assignment instead of comparison.
   Using `=` instead of `==` changes values and breaks logic.

Core Realization:
In-place array problems NEVER remove elements.
They only overwrite elements.

This means:
- You cannot create holes.
- You cannot shift and ignore safely.
- You must compress valid elements to the front.

Correct Mental Model (Two-Pointer Approach):
We maintain two pointers:
- i → scans the array
- j → marks the position of the last unique element

Key idea:
The range [0 … j] always contains unique elements.

Algorithm Explanation:
1. Initialize j = 0 (first element is always unique).
2. Start i from 1.
3. For each element:
   - If arr[i] != arr[j], it is a new unique element.
   - Increment j and copy arr[i] to arr[j].
4. Ignore duplicates by not copying them.
5. Final unique elements are stored in indices 0 to j.

Why This Works:
- No deletion is attempted.
- Duplicates are overwritten later.
- Array is compressed, not modified structurally.

Visual Example:
Input:
[1,1,2,2,3]

Steps:
Start: j = 0 → [1]
i = 1 → duplicate → ignore
i = 2 → new → j = 1 → [1,2]
i = 3 → duplicate → ignore
i = 4 → new → j = 2 → [1,2,3]

Final valid array:
[1,2,3]
Valid length = j + 1

Why My Approach Cannot Be Fixed:
My logic relied on:
- empty spaces
- null checks
- conditional shifting

These concepts do not exist for arrays.
So the logic is fundamentally incompatible with array behavior.

Most Important Takeaway:
In arrays, you never remove elements.
You overwrite and compress.

This is why the two-pointer solution is the only correct and optimal approach for this problem.
