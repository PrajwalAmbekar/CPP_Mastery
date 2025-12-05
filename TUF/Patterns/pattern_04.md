# Problem: Inverted Star Triangle Pattern

## 🔍 Problem Summary (In My Words)

Print a star pattern such that:

- First row prints the maximum number of stars.
- Each next row prints one star less than the previous row.

Example for rows = 5:

```
*****
****
***
**
*
```

---

## 🧠 Example

### Input:
```
rows = 5
```

### Output:
```
*****
****
***
**
*
```

---

## 🚶 My Observations

I noticed a very important pattern-building rule:

| Pattern Type | Inner Loop Runs |
|-------------|----------------|
| Increasing triangle | `j = 1` to `i` |
| Decreasing triangle | `j = i` to `rows` |

So,
- For **increasing** pattern: stars printed depend on the row index → prints `i` times.
- For **decreasing** pattern: stars printed depend on remaining rows → prints `(rows - i + 1)` times.

In this problem, we have decreasing pattern → so we used:

👉 **Inner loop: `j = i; j <= rows`**  
which prints **rows - i + 1** stars.

---

## 🛠 Approach 1 – Using `j = i` to `j <= rows` (My Code Logic)

Here I start the inner loop with `j = i`.

- When `i = 1` → prints from 1 to rows → prints `rows` stars  
- When `i = 2` → prints from 2 to rows → prints `rows - 1` stars  
- When `i = 3` → prints from 3 to rows → prints `rows - 2` stars  

**General formula:** `stars = rows - i + 1`

This creates the inverted decreasing pattern.

---

## 🛠 Approach 2 – Using Direct Formula

Instead of starting `j = i`,  
we can directly calculate how many stars to print:

- Row 1 → rows stars  
- Row 2 → rows - 1 stars  
- Row 3 → rows - 2 stars  

So inner loop becomes:

```
for j = 1 to (rows - i + 1)
```

Same result — but logic becomes clearer.

---

## ⏱ Time & Space Complexity

This pattern prints:

```
rows + (rows - 1) + (rows - 2) + ... + 1
```

This equals **rows × (rows + 1) / 2 → O(rows²)**

| Approach | Time Complexity | Space Complexity |
|----------|----------------|----------------|
| j = i to rows | O(n²) | O(1) |
| j = 1 to rows - i + 1 | O(n²) | O(1) |

---

## 🐞 Mistakes / Things I Corrected

- Initially, I used `j <= cols` which only works properly when `rows == cols`.
- Then I realized this pattern doesn't require `cols` at all.
- This pattern depends only on `rows`, since we are reducing stars per row.

---

## 📝 What I Learned

- For **increasing patterns** → inner loop: `j = 1` to `i`
- For **decreasing patterns** → inner loop: `j = i` to `rows`
- The formula `(rows - i + 1)` comes directly from understanding how many times the loop runs.
- Better clarity comes when loop logic and pattern logic match.
