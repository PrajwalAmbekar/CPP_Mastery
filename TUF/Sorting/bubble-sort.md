Problem: Bubble Sort – Understanding the Core Logic and Optimization

Problem Statement  
Given an array of integers, sort the array in ascending order using the Bubble Sort algorithm.

This problem focuses not only on implementing Bubble Sort, but also on clearly understanding **what is actually happening internally**, similar to how Selection Sort logic is understood.

---

Input  
Enter the size of the array: 6  
Enter the elements of the array: 13 46 24 52 20 9  

---

Output  
Sorted array: 9 13 20 24 46 52  

---

Selection Sort vs Bubble Sort (Core Difference)

Selection Sort logic (for comparison):
- Select a range (unsorted part of array)
- Find the minimum element in that range
- Swap it with the first element of the range
- Fix the first index, move to next index

In Selection Sort:
- The **left side grows sorted**
- The **minimum element is placed correctly in one swap**
- Number of swaps is minimal

---

Exact Definition of Bubble Sort (Core Logic)

Bubble Sort works by **repeatedly comparing adjacent elements** and swapping them if they are in the wrong order.

The key idea:
- In each pass, the **largest element in the unsorted part “bubbles up” to its correct position at the end**.
- After each pass, the **last element becomes fixed and sorted**.

---

What Is Actually Happening in Bubble Sort (Step-by-Step)

Assume array:
13 46 24 52 20 9

Pass 1 (i = n-1):
- Compare 13 & 46 → no swap
- Compare 46 & 24 → swap → 13 24 46 52 20 9
- Compare 46 & 52 → no swap
- Compare 52 & 20 → swap → 13 24 46 20 52 9
- Compare 52 & 9 → swap → 13 24 46 20 9 52

After pass 1:
- Largest element (52) is at the end
- Last index is now fixed

Pass 2:
- Same process, but ignore last element
- Next largest element bubbles to second-last position

This continues until the array is sorted.

---

How Bubble Sort Thinks (One-Line Logic)

“In every pass, push the largest element of the unsorted part to the end using adjacent swaps.”

This is why it is called **Bubble Sort**:
- Big elements slowly “bubble” to the top (right side).

---

Why First Index Looks Fixed in Bubble Sort

- We always start comparing from index 0
- But index 0 is NOT fixed
- It keeps changing during swaps
- Only the **last index becomes fixed after each pass**

This is opposite of Selection Sort:
- Selection Sort fixes the first index
- Bubble Sort fixes the last index

---

Optimized Bubble Sort (Early Stopping)

Observation:
- If the array is already sorted
- No swaps will occur in a full pass

Optimization:
- Use a boolean flag `swapped`
- If no swap happens in a pass, break the loop

This reduces best-case time complexity.

---

Time and Space Complexity

Without optimization:
- Time Complexity: O(n²) in all cases
- Space Complexity: O(1)

With optimization:
- Best Case: O(n) (already sorted)
- Average Case: O(n²)
- Worst Case: O(n²)
- Space Complexity: O(1)

---

What I Learned

- Bubble Sort works by adjacent comparisons and swaps
- Largest element moves to the end in each pass
- Last index becomes fixed after every iteration
- Bubble Sort is stable but inefficient for large arrays
- Optimization helps for nearly sorted arrays
- Understanding “what gets fixed” is key to sorting algorithms
