# Problem: String Traversal and Pass-by-Value in C++

## Problem Statement
Take a string input from the user.  
1. Traverse the string and print each character along with its index.  
2. Pass the string to a function, modify it, and observe whether the original string changes.

This problem is used to understand string traversal and pass-by-value behavior in C++.

---

## Input
raj

---

## Output
The element present in the string at index 0 is: r  
The element present in the string at index 1 is: a  
The element present in the string at index 2 is: j  
The modified new string is: Paj  
The original string is: raj  

---

## Approach
- Take string input using `cin`.
- Traverse the string using a loop from index `0` to `length - 1`.
- Print each character using `string[i]`.
- Pass the string to a function by value.
- Inside the function:
  - Create a copy of the string.
  - Modify the copy.
  - Also modify the function parameter to test behavior.
- Return the modified copy.
- Print both returned string and original string.

---

## Important Observation
In C++, function parameters are passed **by value** by default.

This means:
- The function receives a **copy** of the original string.
- Modifying the parameter inside the function does NOT change the original string.
- Only the returned value reflects changes.

---

## Correct Understanding of modify_String Function
- `string newStr = str` creates a copy.
- Modifying `newStr` does not affect anything outside the function.
- Modifying `str` also does not affect the original string from `main`.
- The original string remains unchanged unless passed by reference.

---

## What NOT To Do
- Do NOT assume modifying function parameters changes original data.
- Do NOT assume string assignment creates a reference.
- Do NOT expect changes unless using pass-by-reference (`string&`).

---

## Time and Space Complexity
- Time Complexity: O(n)
- Space Complexity: O(n)

---

## What I Learned
- How to traverse a string in C++
- How pass-by-value works
- Difference between modifying a copy and original data
- Why returning a value is required to reflect changes
