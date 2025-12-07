# Problem: Double Pyramid Star Pattern (Even Rows - Older Version)

## 🔍 Problem Summary
This pattern prints two pyramids combined vertically:

- Top part → normal centered pyramid
- Bottom part → inverted pyramid
- Works correctly for even number of rows like 6, 8, 10

Example for `rows = 8`:

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

## 🧠 Observation and Table (My Method)

| Row (i) | Leading Spaces | Stars |
|--------|----------------|-------|
| 1      | 3              | 1     |
| 2      | 2              | 3     |
| 3      | 1              | 5     |
| 4      | 0              | 7     |
| 5      | 0              | 7     |
| 6      | 1              | 5     |
| 7      | 2              | 3     |
| 8      | 3              | 1     |

I noticed:

- For top part → spaces decrease, stars increase.
- For bottom part → spaces increase, stars decrease.

---

## 📐 Derived Formulas (My Version)

```
half = (rows + 1) / 2
```

### Top Half (`i <= half`)
```
spaces = half - i
stars  = 2*i - 1
```

### Bottom Half (`i > half`)
```
spaces = i - half - 1
stars  = rows - 1 - 2*(spaces)
```

These formulas allowed me to complete the pattern within 15 minutes.

---

## ⏱ Time & Space Complexity

- Time: O(rows²)
- Space: O(1)

---

## 📝 What I Learned
- How to break patterns into phases.
- How to derive formulas using a table.
- Centered patterns require controlling both spaces and stars.

> This version works best for even row values and was my first successful logic.
