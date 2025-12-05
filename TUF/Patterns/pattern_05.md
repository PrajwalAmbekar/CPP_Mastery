# Problem: Inverted Number Triangle Pattern

## 🔍 Problem Summary (In My Words)

Print a number pattern where:

- First row prints numbers from 1 to rows.
- Each next row prints one number less.
- The decreasing is from the end, not the beginning.

Example for rows = 5:

```
12345
1234
123
12
1
```

---

## 🧠 Example

### Input:
```
rows = 5
```

### Output:
```
12345
1234
123
12
1
```

---

## 🚶 My Observation for This Problem

This pattern is exactly like the **inverted star triangle**, except instead of printing `"*"`, we print numbers from **1 to (rows - i + 1)**.

So:

| Row (i) | Numbers Printed |
|--------|----------------|
| 1 | 1 to 5 |
| 2 | 1 to 4 |
| 3 | 1 to 3 |
| 4 | 1 to 2 |
| 5 | 1 |

This follows the same formula:

👉 **Numbers printed = (rows - i + 1)**

---

## 🛠 Final Approach (Step-by-Step)

1. Read number of rows.
2. Run outer loop `i = 1` to `rows`.
3. For each row, run inner loop: `j = 1` to `rows - i + 1`.
4. Print the value of `j` inside the loop.
5. Move to new line after inner loop.

---

## ⏱ Time & Space Complexity

Total numbers printed:

`rows + (rows - 1) + (rows - 2) + ... + 1 = O(rows²)`

| Complexity | Value |
|------------|------|
| Time | O(n²) |
| Space | O(1) |

---

## 📝 What I Learned

- Number patterns follow the same loop structure as star patterns.
- Replace `"*"` with `j` and the logic stays identical.
- Recognizing formula `(rows - i + 1)` makes decreasing patterns easier.
- This problem helped confirm understanding rather than correct mistakes.
