# Problem: Print a Rectangle Pattern Using Stars (*)

## 🔍 Problem Summary (In My Words)

We need to print a rectangle pattern made of `*` symbols.

- The number of rows will be given by user input.
- The number of columns will also be given by user input.
- We must print stars in a grid format (rows x columns).

Example:
If rows = 3 and columns = 5

Output:
```
*****
*****
*****
```

---

## 🧠 Example

### Input:
```
rows = 3
columns = 5
```

### Output:
```
* * * * *
* * * * *
* * * * *
```

---

## 🚶 My First Thought / Approach

I knew this was a **nested loop problem**:
- Outer loop → controls number of rows
- Inner loop → prints stars for each column

Initially, I thought of writing the loops without planning variable positions properly and forgot newline handling.

---

## 🛠 Final Approach (Step-by-Step)

1. Take input for rows
2. Take input for columns
3. Use outer loop `i` from 1 to rows
4. Inside it, use inner loop `j` from 1 to columns
5. Print `*` in the inner loop
6. After inner loop ends → print a new line

---

## ⏱ Time & Space Complexity

| Approach | Time | Space |
|----------|------|-------|
| Nested Loop | O(rows × columns) | O(1) |

---

## 🧩 Code (Final Solution)

```
Check solution.cpp inside this folder
```

---

## 🐞 Mistakes / Things I Fixed

- ❌ Did not declare loop variables `i` and `j` externally  
- ❌ Forgot to increment `j` inside the inner loop  
- ❌ Forgot to add newline after finishing the inner loop  

### What these mistakes caused:
| Mistake | Result |
|--------|--------|
| Missing `i,j` | Loop not working |
| Missing `j++` | Infinite loop |
| Missing newline | Output all stars in one single long line |

---

## 📝 What I Learned From This Problem

- How nested loops work in pattern printing  
- The inner loop must finish fully before moving to next row  
- Importance of placing `cout << endl;` after inner loop completes

