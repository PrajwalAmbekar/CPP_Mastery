Problem: Sum of First N Natural Numbers Using Recursion

Problem Statement  
Given a positive integer N, compute the sum of the first N natural numbers using recursion.

Natural numbers sequence:  
1 + 2 + 3 + ... + N

Input  
5

Output  
15

My Approach (Brute Force Using Recursion)  
I solved this problem using a brute-force recursive approach with an accumulator instead of directly using the optimized formula.

The recursive function takes three parameters:
- N → the limit
- i → current number being added
- ans → accumulated sum

The recursion starts from i = 1 and keeps adding values until i becomes greater than N.

Recursive Logic  

Base condition:  
If i > N, return the accumulated sum ans.

Recursive step:  
Call the function again with:
- i increased by 1
- ans increased by current i

Function Signature  
int sum(int N, int i, int ans)

Important Mistake I Made  
Initially, I wrote a return statement only inside the base condition and forgot to return anything in the recursive case.

This caused the compiler error:  
function reaches end of non-void return statement

Why This Error Occurred  
- The function return type is int  
- Every possible execution path must return an integer  
- The recursive call itself produces an integer value  
- That value must be returned back to the caller  

How I Fixed It  
I added a return statement in the recursive case so that the result of the recursive call is returned properly.

Correct recursive call:  
return sum(N, i + 1, ans + i)

How the Code Works Internally  

Example with N = 3  

Call stack creation:
sum(3,1,0)  
→ sum(3,2,1)  
→ sum(3,3,3)  
→ sum(3,4,6)  

Base condition is hit when i > N and the function returns 6.

Stack unwinding:
sum(3,4,6) returns 6  
sum(3,3,3) returns 6  
sum(3,2,1) returns 6  
sum(3,1,0) returns 6  

Key Understanding  
- The return statement ends only the current function call  
- Previous recursive calls wait for the next call to finish  
- The final answer propagates back through the recursion stack  

Relation to Tail Recursion  
This approach is tail recursive because:
- The recursive call is the last operation in the function  
- No computation happens after the recursive call  

Optimized Version  
An optimized recursive version also exists:
sum(N) = N + sum(N - 1)

However, I intentionally solved the accumulator-based version first to understand recursion flow and return behavior.

What NOT To Do  
- Do not forget to return the recursive call result  
- Do not assume return stops all recursion instantly  
- Do not use i++ inside recursive arguments  
- Do not ignore compiler warnings  

Time and Space Complexity  
Time Complexity: O(N)  
Space Complexity: O(N) due to recursion stack  

What I Learned  
- Every non-void function must return a value on all execution paths  
- Recursive calls return values like normal functions  
- Return propagates values back through the call stack  
- Understanding recursion flow is more important than memorizing formulas
