Problem: Understanding Merge Sort – Focus on the Merge Logic (Why It Works)

Problem Statement  
Given an array of integers, sort the array using Merge Sort.  
The main difficulty in this problem is NOT recursion, but understanding **how two sorted halves are merged** correctly.

This file focuses on:
- Why merge sort is different from earlier sorting techniques
- How recursion divides the array
- How the merge function works
- WHY each line in merge() exists (not just what it does)
- How to remember the merge logic permanently

Example array used throughout:
4 2 7 1 5 3

---

Big Picture (Very Important)

Merge Sort has TWO distinct phases:

1) Divide (recursion)
2) Merge (actual sorting)

Important truth:
- Recursion only SPLITS the array
- Sorting happens ONLY inside the merge() function

If you understand merge(), you understand merge sort.

---

Recursion Tree Visualization

Initial call:
mergeSort(arr, 0, 5)

Tree:

mergeSort(0,5)
├── mergeSort(0,2)
│   ├── mergeSort(0,1)
│   │   ├── mergeSort(0,0) → return
│   │   └── mergeSort(1,1) → return
│   │   └── merge(0,0,1)
│   └── mergeSort(2,2) → return
│   └── merge(0,1,2)
└── mergeSort(3,5)
    ├── mergeSort(3,4)
    │   ├── mergeSort(3,3) → return
    │   └── mergeSort(4,4) → return
    │   └── merge(3,3,4)
    └── mergeSort(5,5) → return
    └── merge(3,4,5)

Final:
merge(0,2,5)

Observation:
- merge() is called AFTER both left and right parts are sorted
- mergeSort never sorts directly

---

Why Merge Sort Feels Harder Than Selection/Bubble/Insertion

Earlier sorting techniques:
- Selection Sort: selects minimum and swaps
- Bubble Sort: swaps adjacent elements
- Insertion Sort: shifts elements in-place

All of them:
- Work inside ONE array
- Compare elements directly and swap/shift

Merge Sort:
- Does NOT sort in place during comparison
- Uses an EXTRA temporary array
- Combines TWO already-sorted halves

This is why merge logic feels new and confusing.

---

Understanding merge(arr, low, mid, high)

At the time merge() is called, this condition is GUARANTEED:

arr[low … mid]   → already sorted  
arr[mid+1 … high] → already sorted  

Merge’s job:
Combine these two sorted parts into one sorted segment.

---

Why left = low and right = mid + 1

left pointer:
- Starts at the beginning of left sorted half
- left = low

right pointer:
- Starts at the beginning of right sorted half
- right = mid + 1

Why NOT high?
Because:
- high is the END of the right half
- We need to START comparing from the FIRST element of the right half
- That first element is at index mid + 1

So:
Left half range  → low to mid  
Right half range → mid + 1 to high  

---

Why We Use Two Pointers (left and right)

Key idea to remember:
“You cannot merge without tracking both halves simultaneously.”

left pointer:
- Traverses left sorted half

right pointer:
- Traverses right sorted half

At every step:
- Compare arr[left] and arr[right]
- Pick the smaller one
- Move that pointer forward

This ensures sorted order.

---

Line-by-Line WHY of merge() Logic

Create temp array:
temp is used because:
- We cannot overwrite original values while still comparing
- We need a safe place to store merged results

Initialize pointers:
left = low  
right = mid + 1  

WHY:
- left starts from first element of left half
- right starts from first element of right half

Main comparison loop:
while(left <= mid AND right <= high)

WHY:
- We compare until one half is exhausted
- Both halves must still have elements to compare

Comparison:
if arr[left] <= arr[right]

WHY:
- Both halves are already sorted
- Smaller value must come first to maintain order
- <= ensures stability (preserves order of equal elements)

Move pointer after inserting:
- If left element chosen → left++
- If right element chosen → right++

WHY:
- We have already placed that element into temp
- No need to consider it again

Remaining elements (left side):
If right half finishes first:
- Copy remaining left half elements directly

WHY:
- Left half is already sorted
- Remaining elements are all greater than previously merged ones

Remaining elements (right side):
Same logic if left half finishes first

Copy back to original array:
arr[i] = temp[i - low]

WHY:
- temp starts from index 0
- arr segment starts from index low
- i - low maps temp indices correctly

---

Dry Run of Final Merge (Most Important)

Left half:
2 4 7

Right half:
1 3 5

Comparison sequence:
2 vs 1 → take 1
2 vs 3 → take 2
4 vs 3 → take 3
4 vs 5 → take 4
7 vs 5 → take 5
Remaining → 7

Merged result:
1 2 3 4 5 7

---

Steps to Remember Merge Logic (MEMORY TRICK)

1) Assume left and right halves are already sorted
2) Use two pointers
3) Compare and pick smaller
4) Move only one pointer at a time
5) Copy leftovers
6) Copy temp back

If you remember these 6 steps, you will never forget merge sort.

---

Why Merge Sort Is Powerful

- Guaranteed O(n log n) time
- Stable sorting algorithm
- Works well for large datasets
- Preferred for linked lists
- Sorting happens during merge, not recursion

---

Final Key Insight (Very Important)

Recursion is NOT the hard part.
Merge is the heart of Merge Sort.

If you can explain merge() clearly,
you truly understand Merge Sort.
