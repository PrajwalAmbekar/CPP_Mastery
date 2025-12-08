# Problem: 0–1 Triangle Pattern

## 🔍 Problem Statement (In My Words)

Print a right-angled triangle pattern using `0` and `1` such that:

- The number of rows is given by the user.
- Each row `i` contains `i` values.
- Values alternate between `1` and `0` in a checkerboard style.

For `rows = 5`, the output should be:

```
1
0 1
1 0 1
0 1 0 1
1 0 1 0 1
```

For `rows = 6`:

```
1
0 1
1 0 1
0 1 0 1
1 0 1 0 1
0 1 0 1 0 1
```

---

## 🧠 First Observation

I noticed:

- Row 1 starts with `1`
- Row 2 starts with `0`
- Row 3 starts with `1`
- Row 4 starts with `0`

So:
- **Odd rows start with `1`**
- **Even rows start with `0`**
- Each row has `i` elements (where `i` is the row number)

At first, I tried to handle this using only row- or column-based conditions.

---

## ❌ First Attempts (What Went Wrong)

### 1️⃣ Idea: Use row parity only

I thought:
- If row is odd → start with 1
- If row is even → start with 0

Then I tried to manage alternation with **two inner loops** or complex conditions.  
But it became messy and not easy to maintain.

### 2️⃣ Idea: Use `j % 2` condition

I tried:

```cpp
if (j % 2 == 0)
    print 0;
else
    print 1;
```

This gave correct pattern only for some rows (like when rows are odd), but **not for all rows**, because it ignored the row index `i`. It only looked at the position inside a row.

### 3️⃣ Idea: Combine row and column parity with OR / AND

Then I experimented with:

```cpp
if (j % 2 == 0 || i % 2 == 0) ...
```

and

```cpp
if (j % 2 == 0 && i % 2 == 0) ...
```

These created different patterns, but still not the target one.  
I realized I was overcomplicating things and mixing conditions without clear logic.

---

## 💡 Final Insight (Correct Logic)

Instead of looking at `i` and `j` separately, I treated each position `(i, j)` together.

I noticed:

- Positions where **`i + j` is even → 1**
- Positions where **`i + j` is odd → 0**

Check:

- (1,1): 1+1 = 2 → even → `1`
- (2,1): 2+1 = 3 → odd → `0`
- (2,2): 2+2 = 4 → even → `1`
- (3,1): 3+1 = 4 → even → `1`
- (3,2): 3+2 = 5 → odd → `0`
- (3,3): 3+3 = 6 → even → `1`

So the rule becomes:

```cpp
if ((i + j) % 2 == 0)
    print 1;
else
    print 0;
```

This gives the exact alternating 0–1 triangle for **both even and odd row counts**.

---

## 🛠 Final Approach (Step-by-Step)

1. Read `rows` from input.
2. Run outer loop `i` from `1` to `rows`.
3. For each row, run inner loop `j` from `1` to `i`.
4. For each `(i, j)`:
   - If `(i + j) % 2 == 0` → print `1`
   - Else → print `0`
5. After each row, print newline.

---

## ⏱ Time & Space Complexity

- **Time Complexity:**  
  We run the inner loop `1 + 2 + ... + rows = O(rows²)`  
- **Space Complexity:**  
  Only a few variables → `O(1)`

---

## 📝 What I Learned

- Sometimes the pattern depends on **both** row and column together, not individually.
- Using `(i + j)` gives a **checkerboard style** of alternation (similar logic used in chessboard coloring).
- Trial and error with `i % 2` and `j % 2` helped me finally see the `(i + j) % 2` pattern.
- Writing down coordinates `(i, j)` and checking values manually is very helpful for pattern problems.
