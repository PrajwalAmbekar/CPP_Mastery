# Problem: Print Increasing Number Triangle Pattern

## 🔍 Problem Summary (In My Words)

We need to print a number pattern where:

- The number of rows is given by the user.
- In each row, the numbers start from **1 up to the row number**.

Example:
If input rows = 4  
Output:
```
1
12
123
1234
```

---

## 🧠 Example

### Input:
```
rows = 4
```

### Output:
```
1
12
123
1234
```

---

## 🚶 My First Thought / Approach

This pattern is similar to the star increasing triangle,  
but instead of printing `"*"` repeatedly,  
we print numbers starting from **1** to **current row index**.

So:
- row 1 → print 1
- row 2 → print 1 2
- row 3 → print 1 2 3
- row 4 → print 1 2 3 4

---

## 🛠 Final Approach (Step-by-Step)

1. Read number of rows.
2. Run a loop from `i = 1` to `rows`.
3. Inside it, loop `j = 1` to `i`.
4. Print `j` (not `i`) inside the loop.
5. After inner loop ends → move to new line.

---

## ⏱ Time & Space Complexity

| Approach | Time | Space |
|----------|------|-------|
| Nested Loop | O(n²) | O(1) |

This is because the total print operations are:  
1 + 2 + 3 + … + n → O(n²)

---

## 🧩 Code (Final Solution)

```
Check solution.cpp inside this folder
```

---

## 🐞 Mistakes / Things I Fixed

| Mistake | Result |
|--------|--------|
| Printed `i` instead of `j` | Printed: 1, 22, 333, 4444 |
| Correct is printing `j` | Gives: 1, 12, 123, 1234 |

### Why this mistake happened:

- Thought: printing row number each time is enough  
- Realization: pattern depends on **position**, not the row label

---

## 👀 Observation I Made

- To print increasing numbers, the loop should run from **1 to the row index**.
- Inner loop controls how many digits to print.
- Value printed is the **loop index j**, not i.

---

## 📝 What I Learned From This Problem

- Difference between printing `i` vs printing `j`
- How nested loops represent rows and columns logically
- How to convert star patterns to number patterns
