Problem: Character Frequency Counting Using Hashing (Character Hashing)

Problem Statement  
Given a lowercase string and multiple character queries, find the frequency of each queried character in the string using hashing.

This problem introduces character hashing and explains how characters are mapped to integer indices using ASCII values.

---

Input  
Enter the string: helloworld  
Enter the number of query characters: 3  
Enter the query characters: l o z  

---

Output  
Frequency of l is: 3  
Frequency of o is: 2  
Frequency of z is: 0  

---

My Initial Understanding and Observation  
Hash tables work using integer indices.  
Characters are not integers directly, so to store character frequencies in a hash table, characters must first be mapped to integers.

I understood that characters internally follow ASCII encoding, where each character has a numeric ASCII value.

---

Lowercase Character Hashing (a–z Only)  
When the input string contains only lowercase letters from a to z:

- Total characters = 26  
- Hash table size = 26  

Mapping logic:
index = character - 'a'

Explanation:
- 'a' - 'a' = 0  
- 'b' - 'a' = 1  
- 'z' - 'a' = 25  

This maps all lowercase letters into valid indices from 0 to 25.

This formula works only when the input is restricted to lowercase letters.

---

General ASCII Character Hashing (All Characters)  
When the string can contain any character (uppercase, lowercase, digits, symbols):

- Total ASCII characters = 256  
- Hash table size = 256  

Mapping logic:
index = (unsigned char)character

Each character already has an ASCII value between 0 and 255, so it can be directly used as an index.

Casting to unsigned char is important to avoid negative indices for characters with ASCII values above 127.

---

Clarification About ASCII and Syntax (Important Correction)

Correct facts:
- A character stored in a variable (char c) has an underlying ASCII integer value.
- Writing a character in single quotes like 'a' also represents its ASCII value.
- Subtracting characters works because both are treated as integers internally.

Examples:
- char c = 'c';  
  c gives ASCII value 99  
- 'a' gives ASCII value 97  
- c - 'a' = 2  

So yes:
- char alone gives ASCII value
- character written inside single quotes also gives ASCII value
- character - 'a' gives the relative index within a character set

Your understanding here is correct.

---

Why Hashing Is Better Than Brute Force  
Initial brute-force approach:
- For each query character, traverse the entire string
- Time complexity becomes O(n × m), similar to O(n²)

Hashing approach:
- Pre-store frequencies in one traversal
- Answer each query in O(1) time

This reduces total complexity drastically.

---

Time and Space Complexity  

Brute Force:
- Time Complexity: O(n²)
- Space Complexity: O(1)

Character Hashing:
- Preprocessing Time: O(n)
- Query Time: O(1)
- Total Time: O(n + m)
- Space Complexity:
  - O(26) for lowercase-only hashing
  - O(256) for full ASCII hashing

---

Common Mistakes to Avoid  
- Printing hashTable directly prints the memory address, not contents
- Using incorrect hash table size for the character set
- Forgetting to cast to unsigned char for ASCII hashing
- Using lowercase hashing logic for uppercase characters

---

What I Learned  
- Characters are internally stored as ASCII integers
- Hashing converts repeated searching into constant-time lookup
- Choosing the correct hash table size is crucial
- Character-to-index mapping depends on the character set
- Hashing is a powerful optimization technique in DSA
