# Problem: Print Name N Times Using Recursion

## Problem Statement
Given a string `name` and an integer `N`, print the given name exactly `N` times using recursion.

This problem is used to understand:
- Basic recursion
- Base condition
- Correct function return types

---

## Input
raj  
3

---

## Output
raj  
raj  
raj  

---

## Approach
1. Take the string `name` and integer `N` as input.
2. Call a recursive function to print the name.
3. Reduce `N` by 1 on every recursive call.
4. Stop recursion when `N` becomes 0 or less.

---

## Recursive Logic
Base condition:
if (N <= 0) return;

Recursive step:
- Print the name
- Call the function again with `N - 1`

---

## Code Logic Explanation
- The recursive function is responsible only for printing.
- It does not calculate or return any value.
- Therefore, the return type of the function must be `void`.
- Recursion continues until the base condition is met.

---

## Mistake I Made
Initially, I declared the recursive function with return type `string`.

Inside the function, I used:
return;

This caused an error because:
- A function returning `string` must return a string value.
- Using `return;` without a value is only valid for `void` functions.

---

## How I Fixed It
- Changed the function return type from `string` to `void`.
- Since the function only prints output, no return value is required.

Correct function declaration:
void printName(string name, int N)

---

## What NOT To Do
- Do NOT declare a return type when no value is returned.
- Do NOT forget the base condition in recursion.
- Do NOT write recursion without reducing the problem size.
- Do NOT expect recursion to stop automatically.

---

## Time and Space Complexity
Time Complexity: O(N)  
Space Complexity: O(N) due to recursive call stack.

---

## What I Learned
- Importance of base condition in recursion.
- Choosing correct return type for recursive functions.
- How recursion executes step by step.
- Printing problems in recursion usually require `void` return type.
