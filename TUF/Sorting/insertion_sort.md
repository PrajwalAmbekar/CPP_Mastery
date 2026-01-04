Problem: Visual Comparison of Selection Sort, Bubble Sort, and Insertion Sort

Problem Statement  
Understand and compare three basic sorting algorithms — Selection Sort, Bubble Sort, and Insertion Sort — by focusing on their core logic, intuition, and how the array gets sorted step by step.

This comparison is based on:
- What part of the array is considered sorted/unsorted
- What gets fixed in each iteration
- How elements move inside the array

---

Common Example Used  
Array: 7 4 1 5 3

---

1) Selection Sort

Core Idea  
From the unsorted part of the array, select the minimum element and place it at the correct position.

How It Thinks  
- Left part → Sorted  
- Right part → Unsorted  
- Each iteration fixes exactly one element at the left.

Step-by-step Visualization  

Initial:
[7 4 1 5 3]

Iteration 1:
Minimum = 1  
Swap with first element  
[1 | 4 7 5 3]

Iteration 2:
Minimum in remaining = 3  
Swap  
[1 3 | 7 5 4]

Iteration 3:
Minimum = 4  
[1 3 4 | 5 7]

What Gets Fixed  
- Left side (one element per iteration)

Characteristics  
- Fewer swaps  
- Many comparisons  
- Not adaptive  
- Not stable  

---

2) Bubble Sort

Core Idea  
Repeatedly compare adjacent elements and swap them if they are in the wrong order.  
Largest elements “bubble up” to the end.

How It Thinks  
- Left part → Unsorted  
- Right part → Sorted  
- Each iteration fixes the largest element at the end.

Step-by-step Visualization  

Initial:
[7 4 1 5 3]

Pass 1:
Compare & swap → [4 1 5 3 7]  
7 is fixed

Pass 2:
[1 4 3 5 | 7]

Pass 3:
[1 3 4 | 5 7]

What Gets Fixed  
- Right side (one element per pass)

Characteristics  
- Many swaps  
- Easy to understand  
- Adaptive (with swapped flag)  
- Stable  

---

3) Insertion Sort

Core Idea  
Take one element from the unsorted part and insert it into its correct position in the sorted part.

How It Thinks (Standard)  
- Left part → Sorted  
- Right part → Unsorted  
- Uses shifting instead of swapping.

Step-by-step Visualization  

Initial:
[7 | 4 1 5 3]

Insert 4:
[4 7 | 1 5 3]

Insert 1:
[1 4 7 | 5 3]

Insert 5:
[1 4 5 7 | 3]

Insert 3:
[1 3 4 5 7]

What Gets Fixed  
- Sorted part grows naturally from left

Characteristics  
- Very efficient for nearly sorted arrays  
- Adaptive  
- Stable  

---

Side-by-Side Comparison

Algorithm        | Fixed Side | Key Action          | Stable | Adaptive  
Selection Sort   | Left       | Select minimum      | No     | No  
Bubble Sort      | Right      | Swap adjacent       | Yes    | Yes  
Insertion Sort   | Left       | Shift and insert    | Yes    | Yes  

---

Time and Space Complexity (All Three)

Time Complexity  
- Best Case:  
  - Selection: O(n²)  
  - Bubble (optimized): O(n)  
  - Insertion: O(n)  

- Average Case: O(n²)  
- Worst Case: O(n²)  

Space Complexity  
- O(1) (in-place sorting)

---

Key Takeaways  
- Selection Sort focuses on selection and placement.  
- Bubble Sort focuses on swapping adjacent elements.  
- Insertion Sort focuses on shifting and inserting.  
- All use nested loops, but their behavior and efficiency differ.  
- Understanding “what gets fixed” is the key to mastering sorting algorithms.
