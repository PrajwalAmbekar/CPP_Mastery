# Problem: Grade System Using If–ElseIf

## 🔍 Problem Summary (In My Words)
We are given the marks of a student in a number.  
We need to print a grade based on the marks:

- Grade A if marks >= 90  
- Grade B if marks >= 70  
- Grade C if marks >= 50  
- Grade D if marks >= 35  
- Otherwise → Fail

---

## 🧠 Example
### Input:
marks = 95  
### Output:
Grade A  
### Why?
Because marks are greater than or equal to 90.

---

### Input:
marks = 14  
### Output:
Fail  
### Why?
Because marks are less than 35.

---

## 🚶 My First Thought / Approach
I realized this is a simple **if → else if → else** chain problem.
Check the highest condition first and then move downward.

Initially, I thought of directly checking the marks ithout considering the range like 

1. Take input marks
2. Check if marks >= 90 → print Grade A
3. Else if marks >= 70 → print Grade B
4. Else if marks >= 50 → print Grade C
5. Else if marks >= 35 → print Grade D
6. Otherwise → print Fail

---

## 🛠 Final Approach (Step-by-Step)

1. Take input marks 
2. Check if marks is greater than 90  → Grade A
3. Else if marks >= 70 && marks < 90  → Grade B
4. Else if marks >= 50 && marks < 70  → Grade C
5. Else if marks >= 35 && marks < 50  → Grade D
6. Otherwise → print Fail
...

---

## ⏱ Time & Space Complexity

| Approach | Time | Space |
|----------|------|-------|
| If-Else | O(1) | O(1) |

Because we are only comparing one value and printing.

---

## 🧩 Code (Final Solution)

```
Check solution.cpp inside this folder
```

---

## 🐞 Mistakes / Things I Fixed

- Needed to check conditions in **correct descending order**
- Initially forgot to handle the range

---

## 📝 What I Learned From This Problem

- How if → else if → else works
- Why condition order matters
- How simple logic translates into decision structure
