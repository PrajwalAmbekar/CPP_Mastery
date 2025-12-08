# Problem: Half Diamond Star Pattern (Works for Even & Odd)

## 🔍 Problem Summary (In My Words)

Print a star pattern that increases line by line until the middle,
and then decreases again, forming a half-diamond shape.

Example outputs:

Example for rows = 9:
```
*
* *
* * *
* * * *
* * * * *
* * * *
* * *
* *
*
```

Example for rows = 4:
```
*
* *
* * 
*
```

---

## 🧠 Pattern Observation (Table Method)

To understand how many stars should print in each row,
I created a table for rows = 9:

| Row (i) | Stars |
|--------|-------|
| 1      | 1     |
| 2      | 2     |
| 3      | 3     |
| 4      | 4     |
| 5      | 5     | ← MID POINT
| 6      | 4     |
| 7      | 3     |
| 8      | 2     |
| 9      | 1     |

Then I derived:

- Identify the center row:
```
mid = (rows + 1) / 2
```

### For Top Half (i ≤ mid):
```
stars = i
```  
- Because stars go: 1, 2, 3, 4...

### For Bottom Half (i > mid):
```
stars = rows - i + 1
```
- Which mirrors the increasing count:
  - For 6 → 9 - 6 + 1 = 4  
  - For 7 → 9 - 7 + 1 = 3  
  - For 8 → 9 - 8 + 1 = 2 etc.

---

## 🛠 Final Approach (Pseudo Code)

1. Read input `rows`
2. Compute midpoint
3. Loop `i` from 1 to rows
4. If in top half → print `i` stars
5. If in bottom → print `rows - i + 1` stars
6. Print each star with a space `"* "`

This is purely mathematical and avoids extra variables.

---

## ⏱ Time & Space Complexity

| Complexity | Value |
|----------|-------|
| Time | O(rows²) (printing stars) |
| Space | O(1) |

Time complexity is optimal since printing requires O(stars).

---

## 📝 What I Learned

- The pattern is symmetric around the middle row.
- Formula thinking prevents trial-and-error loops.
- Right-side diamond half shape uses:

```
Top Half:    stars = i
Bottom Half: stars = rows - i + 1
```

- Patterns can be solved faster when converted into math.

