# Problem: Print Increasing Triangle Star Pattern

## 🔍 Problem Summary (In My Words)

We need to print a star (`*`) pattern in which:

- The number of rows is given by the user.
- For each row `i`, we must print `i` stars.

Example:
If rows = 4  
Output:
```
*
* *
* * *
* * * *
```

---

## 🧠 Example

### Input:
```
rows = 4
```

### Output:
```
*
* *
* * *
* * * *
```

---

## 🚶 My First Thought / Approach

I understood that:
- For row 1 → print 1 star  
- For row 2 → print 2 stars  
- For row 3 → print 3 stars  
- and so on…

So the number of stars depends on the **current row index**.

---

## 🛠 Final Approach (Step-by-Step)

1. Get input for how many rows to print
2. Use a loop from 1 to `rows`
3. For each row, print stars equal to the row number
4. Move to next line after printing stars of that row

---

## ⏱ Time & Space Complexity

| Approach | Time | Space |
|----------|------|-------|
| Nested Loop | O(n²) | O(1) |

(because star printing happens repeatedly inside nested loop)

---

## 🧩 Code (Final Solution)

```
Check solution.cpp inside this folder
```

---

## 🐞 Mistakes / Things I Fixed

- ❌ Initially used variable `j` to measure columns but didn't use it properly  
  (Realized column count isn't fixed — it depends on row number)

Only one mistake occurred in this problem.

---

## 👀 Observation I Made

- The number of stars printed in a row is equal to the row number.  
  Example:
  - Row 1 → 1 star  
  - Row 2 → 2 stars  
  - Row 3 → 3 stars  

This is an important pattern logic for many triangle problems.

---

## 📝 What I Learned From This Problem

- Nested loop logic for triangle patterns
- Outer loop controls row count
- Inner loop printing count depends on row number
