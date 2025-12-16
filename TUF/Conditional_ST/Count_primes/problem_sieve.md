# Problem: Count Primes (Sieve of Eratosthenes)

## 🔍 Problem Statement (In My Words)

Given an integer `n`, return the number of prime numbers that are **strictly less than `n`**.

A prime number is a number greater than 1 that has **no divisors other than 1 and itself**.

---

## 🧠 Why We Need Sieve (Beyond √n Optimization)

Even the optimized √n approach still:

- Checks every number individually
- Repeats divisor checks again and again
- Becomes slow when `n` is very large (like millions)

So the idea now is:
> **Instead of checking each number separately, mark non-prime numbers in advance.**

This avoids repeated work.

---

## 💡 Core Idea of Sieve of Eratosthenes

1. Assume **all numbers are prime initially**
2. Start from the smallest prime number `2`
3. Mark all multiples of `2` as non-prime
4. Move to the next number that is still marked prime
5. Repeat until `i * i >= n`
6. Count all numbers still marked as prime

---

## 📐 Key Observations

- If a number is a multiple of a smaller number, it is **not prime**
- Multiples smaller than `i * i` are already handled earlier
- That’s why marking starts from `i * i`, not `2*i`

---

## 🛠 Step-by-Step Logic

1. If `n <= 2`, return `0`
2. Create an array `isPrime` of size `n`
3. Mark all values as `true`
4. Mark `0` and `1` as `false` (not prime)
5. Loop `i` from `2` while `i * i < n`
6. If `isPrime[i]` is true:
   - Mark all multiples of `i` starting from `i * i` as `false`
7. Count how many values are still `true`

---

## 🧩 Sieve Logic (Pseudocode)

```
if n <= 2:
    return 0

isPrime[0..n-1] = true
isPrime[0] = false
isPrime[1] = false

for i = 2 while i*i < n:
    if isPrime[i]:
        for j = i*i to n-1 step i:
            isPrime[j] = false

count = 0
for i = 2 to n-1:
    if isPrime[i]:
        count++
```

---

## ⏱ Time & Space Complexity

### Time Complexity

```
O(n log log n)
```

This is much faster than:
- O(n²) → brute force
- O(n√n) → optimized checking

That’s why this is the **expected solution in LeetCode**.

### Space Complexity

```
O(n)
```

We use an extra boolean array to mark prime numbers.

---

## 🐞 Things to Be Careful About

- Always mark `0` and `1` as non-prime
- Start marking from `i * i`, not `2 * i`
- Loop condition should be `i * i < n`
- Works only when extra memory is allowed

---

## 📝 What I Learned From Sieve

- Optimization can come from **changing strategy**, not just loops
- Preprocessing can save a lot of repeated computation
- Sieve is a classic example of time–space tradeoff
- This approach is ideal for problems involving **multiple prime queries**

---

## 📌 Learning Path Note

I solved this problem in three stages:

1. Brute Force → understand prime definition
2. √n Optimization → apply mathematical insight
3. Sieve → apply algorithmic optimization

This helped me understand *why* the optimal solution works, not just how.
