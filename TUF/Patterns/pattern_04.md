# Problem: Inverted Star Triangle Pattern

## 🔍 Problem Summary (In My Words)

We want to print a pattern of stars `*` where:

- The first row has the maximum number of stars.
- Each next row has one star less than the previous row.

Example for 5 rows:

*****
****
***
**
*

---

## 🧠 Example

Input:
- rows = 5

Output:
*****
****
***
**
*

---

## 🚶 My Observation

I observed that:

- The row number is increasing: 1, 2, 3, 4, ...
- The number of stars is decreasing:

  - Row 1 → 5 stars  
  - Row 2 → 4 stars  
  - Row 3 → 3 stars  
  - Row 4 → 2 stars  
  - Row 5 → 1 star  

So the number of stars in each row is:

- `rows - i + 1` (if `i` is the current row, starting from 1)

---

## 🛠 Approach 1 – Using `j = i` to `j <= rows`  (My Code)

I wrote the code like this (conceptually):

- Outer loop: `i` goes from `1` to `rows`
- Inner loop: `j` starts from `i` and runs while `j <= rows`
- Inside inner loop, print `*`
- After the inner loop, print a newline

For each row:

- When `i = 1` → `j` runs from 1 to rows → prints `rows` stars  
- When `i = 2` → `j` runs from 2 to rows → prints `rows - 1` stars  
- When `i = 3` → `j` runs from 3 to rows → prints `rows - 2` stars  

So in general:

- Stars printed in row `i` = `rows - i + 1`

This matches the pattern I wanted.

---

## 🛠 Approach 2 – Using Star Count Formula Directly

Another way to write the same logic is:

- Outer loop: `i` from `1` to `rows`
- Inner loop: `j` from `1` to `rows - i + 1`
- Print `*` inside inner loop
- New line after inner loop

Here, I directly use the formula:

- Row 1 → `rows - 1 + 1 = rows` stars  
- Row 2 → `rows - 2 + 1 = rows - 1` stars  
- Row 3 → `rows - 3 + 1 = rows - 2` stars  

This approach is clearly tied to **rows only**.

---

## ⏱ Time & Space Complexity

Both approaches use nested loops.

Total stars printed:

- `rows + (rows - 1) + (rows - 2) + ... + 1`  
- This sum is `rows * (rows + 1) / 2` → this is **O(rows²)**.

| Approach | Time Complexity | Space Complexity |
|----------|-----------------|------------------|
| j = i to j <= rows | O(n²) | O(1) |
| j = 1 to j <= rows - i + 1 | O(n²) | O(1) |

(where `n = rows`)

---

## 🐞 Mistakes / Things I Fixed

1. **Earlier version: used `j <= cols`**  
   - I was reading both `rows` and `cols` from input.  
   - Inner loop condition was: `while (j <= cols)`  
   - This works only properly when `rows == cols`.  
   - If rows and cols are different, pattern breaks (extra blank lines etc).

2. **Current version: `j <= rows` but still reading `cols`**  
   - Now the logic is correct for a triangle (it depends only on `rows`).  
   - But I still ask the user for `cols` and don’t use it anywhere.  
   - This makes the code slightly confusing / unnecessary input.

✅ Final understanding:

- This inverted triangle pattern **depends only on rows**.  
- I don’t actually need `cols` for this problem.
- Clean version would either:
  - Remove `cols` completely, or  
  - Use a square pattern where `rows == cols` and clearly say that.

---

## 📝 What I Learned From This Problem

- Relationship between row index and how many stars get printed.
- How `j = i` to `j <= rows` automatically gives decreasing stars.
- Why tying logic to only the required variable (`rows`) makes the code cleaner.
- How mixing `rows` and `cols` can cause confusion in triangle patterns.
