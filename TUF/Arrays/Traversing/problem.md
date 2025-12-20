# Problem: Traverse and Print an Array (C++ Basics)

## 🔍 Problem Statement (In My Words)

Given an array of integers, traverse the array using a loop and print all its elements.

The goal of this problem is to understand:
- How arrays work in C++
- How arrays are passed to functions
- Common beginner mistakes with arrays

---

## 🧠 My Initial Understanding

I wanted to:
- Take input for an array
- Pass the array to a function
- Traverse and print its elements

This sounded simple, but I encountered multiple compilation errors, which helped me understand how C++ arrays actually work.

---

## ❌ Errors I Made and Why They Happened

### 1️⃣ Reading input incorrectly

❌ Code I wrote:
```
cin >> my_array[8];
```

🔴 Why this is wrong:
- An array of size 8 has valid indices from `0` to `7`
- `my_array[8]` is **out of bounds**
- This reads only **one value**, not the whole array

✅ Correct approach:
- Use a loop to read all elements

---

### 2️⃣ Passing array incorrectly to function

❌ Code I wrote:
```
obj.Traversed_array(my_array[]);
```

🔴 Why this is wrong:
- `my_array[]` is **invalid syntax** when passing arguments
- In function calls, we pass only the array name

✅ Correct:
```
obj.Traversed_array(my_array, size);
```

---

### 3️⃣ Assuming arrays have `.length()` in C++

❌ Code I wrote:
```
original_array.length()
```

🔴 Why this is wrong:
- In C++, arrays decay to pointers when passed to functions
- Pointers do NOT have `.length()`
- `.length()` exists in Java / Python, not in C-style arrays

✅ Correct approach:
- Always pass array size as a separate parameter

---

### 4️⃣ Wrong return type for traversal function

❌ Code I wrote:
```
int Traversed_array(int original_array[])
```

🔴 Why this is wrong:
- Traversal means **printing**, not returning a value
- Returning inside a loop exits after first iteration

✅ Correct:
```
void Traversed_array(int original_array[], int size)
```

---

### 5️⃣ Returning inside the loop

❌ Code I wrote:
```
return original_array[i];
```

🔴 Why this is wrong:
- `return` exits the function immediately
- Only the first element gets returned
- Traversal requires visiting ALL elements

---

### 6️⃣ Defining `main()` inside a class

❌ Code I wrote:
```
class Solution {
    int main() { ... }
};
```

🔴 Why this is wrong:
- In normal C++, `main()` must be **outside all classes**
- This structure works only in platforms like LeetCode, not in local compilers

---

## ✅ Correct Logic (What Finally Worked)

- Input array elements using a loop
- Pass array **and its size** to a function
- Traverse using a loop
- Print elements inside the function
- Keep `main()` outside the class

---

## 🧩 Correct Pseudocode

```
read array size
read elements using loop

call traverse(array, size)

function traverse(array, size):
    for i from 0 to size-1:
        print array[i]
```

---

## 🚫 What NOT To Do (Important Lessons)

- ❌ Do NOT use `array.length()` in C++
- ❌ Do NOT access `array[size]`
- ❌ Do NOT pass `array[]` in function calls
- ❌ Do NOT return values inside traversal loop
- ❌ Do NOT forget to pass array size
- ❌ Do NOT define `main()` inside a class (for normal C++)

---

## ⏱ Time & Space Complexity

- **Time Complexity:** `O(n)` — one loop to traverse the array
- **Space Complexity:** `O(1)` — no extra space used

---

## 📝 What I Learned From This Problem

- Arrays in C++ are different from arrays in Java/Python
- When passed to functions, arrays become pointers
- Array size information is lost and must be passed explicitly
- Compiler errors are valuable learning points
- Writing wrong code helped me understand correct C++ behavior

---

## 📌 Note for Future Me

This problem helped me build a strong foundation for:
- Array insertion
- Deletion
- Searching
- Sorting

I will revisit this problem later using:
- Vectors
- STL functions
- More advanced data structures
