Problem: Selection Sort and Input Handling in C++

Problem Statement  
Given an array of integers, sort the array in ascending order using the Selection Sort algorithm.

While solving this problem, an important issue related to input format was observed and fixed.

---

Input  
Enter number of elements: 6  
Enter 6 elements: 13 46 24 52 20 9  

---

Output  
9 13 20 24 46 52  

---

Selection Sort Approach  
Selection Sort works by repeatedly selecting the smallest element from the unsorted part of the array and placing it at the correct position.

Steps followed:
1. Start from index i = 0.
2. Assume the current index i is the minimum.
3. Traverse the remaining array from i+1 to n-1.
4. Find the index of the minimum element.
5. Swap the minimum element with the element at index i.
6. Repeat for all positions.

---

Algorithm Logic Used  
- Outer loop runs from index 0 to n-2.
- Inner loop finds the minimum element from the unsorted portion.
- Swap is done using a temporary variable.

This guarantees that after every outer loop iteration, the smallest remaining element is placed at the correct position.

---

Mistake I Made (Very Important Learning)  
I entered the input elements in this format:

13,46,24,52,20,9

But my code uses:
cin >> arr[i];

C++ cin does NOT support comma-separated input by default.

Because of this:
- cin reads the first number correctly.
- It fails when it encounters a comma.
- The input stream enters a fail state.
- Remaining array elements get garbage values.
- Sorting produces random or incorrect output.

Example of wrong output:
-2083026752 -404752400 0 13 92 32762

---

Correct Input Format  
C++ expects space-separated input when using cin.

Correct format:
13 46 24 52 20 9

Incorrect format:
13,46,24,52,20,9

---

Why This Happened Internally  
- cin reads tokens separated by whitespace.
- Comma is treated as an invalid character.
- Once cin fails, further reads do not work properly.
- This results in undefined behavior.

---

Time and Space Complexity  
Time Complexity:
- O(n²) in all cases (best, average, worst)

Space Complexity:
- O(1), since sorting is done in-place

---

What I Learned  
- Selection Sort logic was correct.
- Input format matters as much as algorithm logic.
- cin expects space-separated values.
- Wrong input can lead to garbage output even if code is correct.
- Debugging input issues is an important programming skill.

