# Problem: Inverted Centered Pyramid Star Pattern

## 🔍 Problem Summary (In My Words)
Print an inverted pyramid of stars `*`, centered properly with spaces on the left side.

Example for rows = 5:
```
*********
 *******
  *****
   ***
    *
```

---

## 🧠 Observing the Pattern

For `rows = 5`, I wrote down the pattern in table form:

| Row (i) | Leading Spaces | Number of Stars |
|--------|----------------|-----------------|
| 1      | 0              | 9               |
| 2      | 1              | 7               |
| 3      | 2              | 5               |
| 4      | 3              | 3               |
| 5      | 4              | 1               |

From this table I observed:

- Spaces **increase** as `i` increases
- Stars **decrease** as `i` increases
- Both change by **2 units** every row (because odd pattern)

---

## 📐 Deriving Formula

### For Spaces:
Row 1 → 0  
Row 2 → 1  
Row 3 → 2

So:  
→ **spaces = i - 1**

### For Stars:
Row 1 → 9  
Row 2 → 7  
Row 3 → 5  

These follow the formula:

- Sequence: `2*rows - 1`, `2*rows - 3`, `2*rows - 5` ...
- General formula:
  → **stars = 2*rows - (2*i - 1)**  
  → Simplified: **stars = 2*rows - 2*i + 1**

This is exactly the opposite of the upward pyramid (`2*i - 1`).

---

## 🛠 Final Approach (Pseudo Code)

1. Read input for `rows`
2. Loop from `i = 1` to `rows`
3. Calculate `space = i - 1`
4. Print spaces
5. Print `2*rows - 2*i + 1` stars
6. Move to next line
7. Repeat

Pattern structure:
```
| space | stars |
```

---

## ⏱ Time and Space Complexity

Total characters printed is square-like pattern:

- **Time Complexity:** `O(rows²)`
- **Space Complexity:** `O(1)` (only few counters used)

---

## 📝 What I Learned

- Downward pyramid is reverse logic of upward pyramid.
- `spaces = i - 1` increases per row.
- `stars = 2*rows - 2*i + 1` forms decreasing odd sequence.
- Writing a table helps see pattern changes clearly.
- Formula thinking reduces confusion in nested loops.
