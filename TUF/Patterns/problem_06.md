# Problem: Centered Pyramid Star Pattern

## 🔍 Problem Summary (In My Words)
We need to print a centered pyramid made of `*` characters where:
- The number of rows is given by the user.
- Stars increase in each row.
- Spaces are added on both sides to keep the pyramid centered.

Example for rows = 5:
```
    *
   ***
  *****
 *******
*********
```

---

## 🧠 Observing the Pattern

To understand how spaces and stars change, I manually wrote a table:

| Row (i) | Leading Spaces | Number of Stars | Trailing Spaces |
|--------|----------------|-----------------|-----------------|
| 1      | 4              | 1               | 4               |
| 2      | 3              | 3               | 3               |
| 3      | 2              | 5               | 2               |
| 4      | 1              | 7               | 1               |
| 5      | 0              | 9               | 0               |

From this pattern, I observed:
- Spaces decrease by 1 each row.
- Stars increase by 2 each row (odd numbers).

---

## 📐 Deriving the Formula

For each row `i`:

- Leading Spaces: `space = rows - i`
- Number of Stars: `stars = 2*i - 1`
- Trailing Spaces (optional): also `rows - i`

So the structure is:
```
| spaces | stars | spaces |
```

---

## 🛠 Final Approach (Pseudo Code)

1. Take input `rows`
2. Loop for each row using `i = 1` to `rows`
3. Calculate `space = rows - i`
4. Print `space` times `" "` (left side)
5. Print `"*"` `2*i - 1` times
6. Print `space` times `" "` again (right side — optional but clean)
7. Move to next line
8. Increment `i`

---

## ⏱ Time and Space Complexity

Total characters printed per row:
```
(rows - i) + (2*i - 1) + (rows - i) = 2*rows - 1
```
For `rows` times:

- **Time Complexity:** `O(rows²)` → This is optimal because the pattern itself contains rows² printed characters.
- **Space Complexity:** `O(1)` → Only a few variables are used.

---

## 🐞 Mistakes I Focused On Avoiding

- Not resetting `space = rows - i` before second space loop.
- Ensuring `2*i - 1` (odd numbers) → not accidentally doubling.

---

## 📝 What I Learned
- How to break patterns into components (**spaces + stars + spaces**).
- How row index helps derive formula.
- Table analysis is useful before coding.
- Pattern problems become easy once formula logic is clear.
