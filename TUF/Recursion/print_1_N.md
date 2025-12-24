# Problem: Print Numbers from 1 to N Using Recursion

## Problem Statement
Given an integer `N`, print numbers in increasing order from `1` to `N` using recursion.

---

## Input
6

---

## Output
1 2 3 4 5 6

---

## Approach
- Use recursion to reach the base case first.
- Print the number while returning from recursive calls.
- This ensures numbers are printed in increasing order.

---

## Recursive Logic
Base condition:
- If `n <= 0`, stop recursion.

Recursive step:
- First call the function with `n - 1`
- Then print `n`

This reverses the order compared to printing before the recursive call.

---

## Recursion Tree Visualization (N = 6)

print_1_N(6)
|
|-- print_1_N(5)
|   |
|   |-- print_1_N(4)
|       |
|       |-- print_1_N(3)
|           |
|           |-- print_1_N(2)
|               |
|               |-- print_1_N(1)
|                   |
|                   |-- print_1_N(0)
|                       |
|                       |-- base case hit, return
|                   |
|                   |-- print 1
|               |
|               |-- print 2
|           |
|           |-- print 3
|       |
|       |-- print 4
|   |
|   |-- print 5
|
|-- print 6

---

## Important Observation
- Printing happens **after** the recursive call.
- Because of this, numbers are printed while the recursion stack is unwinding.
- This produces output in increasing order from 1 to N.

---

## What NOT To Do
- Do NOT print before the recursive call if you want increasing order.
- Do NOT forget the base condition.
- Do NOT modify `n` incorrectly (always reduce it).

---

## Time and Space Complexity
- Time Complexity: O(N)
- Space Complexity: O(N) due to recursion stack.

---

## What I Learned
- Order of execution in recursion matters.
- Printing after recursion reverses the output order.
- Understanding stack unwinding is key to mastering recursion.
