# Problem: Print Numbers from N to 1 Using Recursion

## Problem Statement
Given an integer `N`, print numbers in decreasing order starting from `N` down to `1` using recursion.

---

## Input
6

---

## Output
6 5 4 3 2 1

---

## Approach
- Use recursion to print the current value of `N`.
- Decrease `N` by 1 in each recursive call.
- Stop recursion when `N` becomes less than or equal to 0.

---

## Recursive Logic
Base condition:
- If `N <= 0`, stop recursion.

Recursive step:
- Print `N`
- Call the function again with `N - 1`

---

## Recursion Tree Visualization (N = 6)

print_N_1(6)
|
|-- print 6
|   |
|   |-- print_N_1(5)
|       |
|       |-- print 5
|       |   |
|       |   |-- print_N_1(4)
|       |       |
|       |       |-- print 4
|       |       |   |
|       |       |   |-- print_N_1(3)
|       |       |       |
|       |       |       |-- print 3
|       |       |       |   |
|       |       |       |   |-- print_N_1(2)
|       |       |       |       |
|       |       |       |       |-- print 2
|       |       |       |       |   |
|       |       |       |       |   |-- print_N_1(1)
|       |       |       |       |       |
|       |       |       |       |       |-- print 1
|       |       |       |       |       |   |
|       |       |       |       |       |   |-- print_N_1(0)
|       |       |       |       |       |       |
|       |       |       |       |       |       |-- base case hit, return

---

## Important Observation
- The function prints the number **before** making the recursive call.
- This results in output in decreasing order.
- Each recursive call reduces the problem size by 1.

---

## What NOT To Do
- Do NOT forget the base condition (will cause infinite recursion).
- Do NOT increase `N` in recursive calls.
- Do NOT place the print statement after the recursive call if you want decreasing order.

---

## Time and Space Complexity
- Time Complexity: O(N)
- Space Complexity: O(N) due to recursive call stack.

---

## What I Learned
- How recursion works with decreasing values.
- Importance of base condition.
- How function calls build and unwind in recursion.
- How printing position affects output order.
