Problem: Understanding Merge Sort – Simplified Visualization and Merge Logic

Problem Statement  
Given an array of integers, sort the array using Merge Sort.  
The main difficulty in Merge Sort is not recursion itself, but understanding **how the merge step works** and how two sorted halves are combined.

This file explains:
- Merge Sort in simple terms
- A markdown-friendly recursion visualization
- Why the merge logic works
- Why each line in the merge function is written that way
- How Merge Sort differs from earlier sorting techniques

Example array used:
4 2 7 1 5 3

---

Big Picture

Merge Sort works in two phases:

1) Divide  
   Recursively split the array until each subarray has only one element.

2) Merge  
   Combine two sorted subarrays into one sorted array.

Important rule:
Recursion only splits.  
Actual sorting happens only during merging.

---

Simplified Recursion Visualization (Markdown-Friendly)

Instead of a tree diagram, think in levels:

Level 0:
[4 2 7 1 5 3]

Level 1 (split):
[4 2 7] | [1 5 3]

Level 2 (split):
[4 2] | [7]     [1 5] | [3]

Level 3 (split):
[4] | [2]   [7]     [1] | [5]   [3]

Now merging starts from bottom to top.

---

Merge Steps (Bottom-Up)

Merge [4] and [2]:
→ [2 4]

Merge [2 4] and [7]:
→ [2 4 7]

Merge [1] and [5]:
→ [1 5]

Merge [1 5] and [3]:
→ [1 3 5]

Final merge:
Merge [2 4 7] and [1 3 5]
→ [1 2 3 4 5 7]

---

Why Merge Sort Feels Different from Earlier Sorting Algorithms

Earlier algorithms you learned:

Selection Sort:
- Finds minimum
- Swaps directly in the array

Bubble Sort:
- Swaps adjacent elements
- Pushes largest element to the end

Insertion Sort:
- Shifts elements inside the same array

All of them:
- Compare elements directly
- Work inside one array
- Use swaps or shifts

Merge Sort:
- Does NOT compare every element with every other element
- Uses a temporary array during merging
- Combines two already sorted halves

This is why merge logic feels new.

---

Understanding merge(arr, low, mid, high)

At the moment merge() is called, this is always true:

Left half:  arr[low … mid]   → sorted  
Right half: arr[mid+1 … high] → sorted  

merge() only combines them into one sorted range.

---

Why We Use Two Pointers

We use:
left = low  
right = mid + 1  

Reason:
- left points to the first element of the left sorted half
- right points to the first element of the right sorted half

We do NOT start right from high because:
- high is the end of the right half
- merging must begin from the beginning of both halves

---

Why right = mid + 1 (Very Important)

Left half range:
low to mid

Right half range:
mid + 1 to high

So the first element of the right half is exactly at mid + 1.

---

Why We Compare arr[left] and arr[right]

Both halves are already sorted.
So:
- The smaller of arr[left] and arr[right] must come next in the final sorted array.
- Taking the smaller element preserves sorted order.

This is the core idea of merging.

---

Why We Move Only One Pointer at a Time

When we pick:
- arr[left] → left++
- arr[right] → right++

Reason:
- That element is already placed correctly
- No need to compare it again

---

Why We Copy Remaining Elements Directly

When one half finishes:
- The remaining elements of the other half are already sorted
- They can be copied directly without comparison

This saves time and keeps correctness.

---

Why We Copy temp Back to arr

temp stores the merged result starting from index 0.
Original array range starts at index low.

So we copy:
arr[i] = temp[i - low]

This places merged elements back into the correct position.

---

How to Remember Merge Logic (Simple Steps)

1) Assume both halves are already sorted
2) Start two pointers (left and right)
3) Compare and take the smaller element
4) Move the pointer of the chosen element
5) Copy leftover elements
6) Copy temp back to original array

If you remember these steps, merge sort becomes easy.

---

Why Merge Sort Is Powerful

- Guaranteed O(n log n) time complexity
- Stable sorting algorithm
- Efficient for large datasets
- Preferred for linked lists
- Performance does not degrade for worst-case input

---

Final Insight

If recursion feels easy but merge feels hard, that is normal.
Merge is the heart of Merge Sort.

Once you understand why merge works,
Merge Sort becomes one of the cleanest algorithms in DSA.
