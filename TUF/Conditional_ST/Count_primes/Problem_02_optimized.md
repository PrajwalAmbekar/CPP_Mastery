# Problem: Count Primes (Optimized √n Approach)

## 🔍 Problem Statement (In My Words)

Given an integer `n`, return the number of prime numbers that are **strictly less than `n`**.

A prime number is a number greater than 1 that has **no divisors other than 1 and itself**.

---

## 🧠 Why Optimization Was Needed

In the brute force approach, for each number `i` we checked divisibility from `2` to `i - 1`.

This caused:
- Too many unnecessary checks
- Time complexity of `O(n²)`
- TLE for large inputs (like in LeetCode)

So the goal was:
> **Reduce the number of divisor checks without changing the logic.**

---

## 💡 Key Mathematical Observation

If a number `i` is **not prime**, then:

```
i = a × b
```

At least one of `a` or `b` must be **less than or equal to √i**.

Why?

If both were greater than √i:
```
a × b > √i × √i = i
```
Which is impossible.

### 🔑 Conclusion

To check whether `i` is prime:
- It is enough to check divisibility **only up to √i**
- No need to check till `i - 1`

---

## 🛠 Optimized Logic (Step-by-Step)

1. Take input `n`
2. Initialize `count = 0`
3. Loop `i` from `2` to `n - 1`
4. For each `i`:
   - Assume it is prime
   - Check divisibility from `2` while `j * j <= i`
   - If any divisor found → not prime
5. If still prime → increment count
6. Output the final count

This logic is the same as brute force, but **with fewer checks**.

---

## 🧩 Optimized Code Logic (Pseudocode)

```
for i = 2 to n-1:
    isPrime = true
    for j = 2 while j*j <= i:
        if i % j == 0:
            isPrime = false
            break
    if isPrime:
        count++
```

---

## ⏱ Time & Space Complexity

### Time Complexity

- Outer loop runs `n` times
- Inner loop runs up to `√i` times

Worst case:
```
O(n√n)
```

This is much faster than `O(n²)` and suitable for moderate inputs.

### Space Complexity

```
O(1)
```

Only a few variables are used.

---

## 🐞 Issues Faced / Things to Be Careful About

- Must increment the inner loop variable (`j++`)
- Using `j * j <= i` avoids needing `sqrt()` function
- Still not fast enough for very large `n` (like millions)

---

## 📝 What I Learned From This Optimization

- Small mathematical insights can greatly reduce time complexity
- Optimization doesn’t always require new data structures
- Checking divisors up to √n is a common prime-checking trick
- This approach bridges the gap between brute force and advanced algorithms

---

## 📌 Note for Future Improvement

This solution can still be optimized further using techniques like:
- Sieve of Eratosthenes
- Boolean marking instead of repeated checking

I will revisit this problem after learning those concepts.
