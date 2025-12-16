# Problem: Count Primes (Brute Force Approach)

## 🔍 Problem Statement (In My Words)

Given an integer `n`, count how many prime numbers are **strictly less than `n`**.

A prime number is a number greater than 1 that has **exactly two factors**:
- 1
- the number itself

---

## 🧠 Understanding the Problem

- We need to check **each number from 2 to n-1**
- For each number, decide whether it is prime or not
- If prime → increase the count

Example:

For `n = 10`, numbers checked are:
```
2, 3, 4, 5, 6, 7, 8, 9
```

Prime numbers:
```
2, 3, 5, 7
```

So the answer is `4`.

---

## 🚶 My Brute Force Approach (First Thinking)

My idea was:

1. Take a number `i`
2. Check if it is divisible by any number from `2` to `i-1`
3. If divisible → not prime
4. If not divisible by any → prime
5. Count such numbers

This directly follows the definition of a prime number.

---

## 🛠 Step-by-Step Logic

1. Take input `n`
2. Initialize `count = 0`
3. Loop `i` from `2` to `n-1`
4. For each `i`:
   - Assume it is prime
   - Check divisibility using another loop from `2` to `i-1`
   - If any divisor found → mark as not prime
5. If still prime → increment count
6. Print the final count

---

## 🧩 Code (Brute Force Version)

```
for i = 2 to n-1:
    isPrime = true
    for j = 2 to i-1:
        if i % j == 0:
            isPrime = false
            break
    if isPrime:
        count++
```

(This logic is implemented using nested loops.)

---

## ⏱ Time & Space Complexity

### Time Complexity

- Outer loop runs `n` times
- Inner loop runs up to `i-1` times

Worst case:
```
O(n²)
```

This is expected for a brute force solution.

### Space Complexity

```
O(1)
```

Only a few variables are used.

---

## 🐞 Issues Faced During Implementation

- Initially forgot to increment the inner loop variable, causing an infinite loop.
- The brute force method is slow for large values of `n`, but acceptable for learning.

---

## 📝 What I Learned From This Problem

- How to check if a number is prime using basic logic.
- How nested loops work together.
- Importance of loop increments.
- Brute force solutions help understand the core logic before optimization.

---

## 📌 Note for Future Improvement

This approach is **not optimal** for large inputs.
I plan to revisit this problem later and improve it using optimized techniques after learning more concepts.
