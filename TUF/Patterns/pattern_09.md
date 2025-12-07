# Problem: Double Pyramid Star Pattern (Universal Version — Works for Even & Odd)

## 💡 Why This Improved Version
The previous logic required separate handling for even values.
This solution uses a single formula that works for both:

- Odd rows (5, 7, 9)
- Even rows (6, 8, 10)

---

## 🔍 Example Output (rows = 7)

```
   *
  ***
 *****
*******
 *****
  ***
   *
```

## 🔍 Example Output (rows = 8)

```
       *
      ***
     *****
    *******
    *******
     *****
      ***
       *
```

---

## 🧠 Unified Formula

Let:
```
mid = (rows + 1) / 2
maxStars = 2*mid - 1
```

### For Stars:
```
if i <= mid:
    stars = 2*i - 1              (increasing)
else:
    stars = 2*(rows - i + 1) - 1 (mirror decreasing)
```

### For Spaces:
```
spaces = (maxStars - stars) / 2
```

The key difference:  
➡ Bottom stars are computed from `rows - i + 1` which mirrors perfectly.

---

## 🛠 Final Approach (Single Loop — No Duplication)

1. Identify middle row.
2. Use one loop from 1 → rows.
3. Decide stars based on position relative to middle.
4. Compute spaces using width of the largest row.
5. Print pattern symmetrically.

---

## ⏱ Time & Space Complexity
- Time: O(rows²)
- Space: O(1)

---

## 📝 What This Version Improves
| Old Version | New Version |
|------------|------------|
| Separate loops | Single loop |
| Harder to read | Cleaner logic |
| Works best for even rows | Works for both even & odd |
| Space formula different per half | Unified formula |

> This is the optimized professional version suitable for interviews and readable code.
