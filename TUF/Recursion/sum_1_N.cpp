#include <iostream>
using namespace std;

// Recursive function to calculate the sum of first N natural numbers using optimized tail recursion
// class Solution{
// public:
//     int sum(int N) {
//         // Base case: if N is 1, return 1
//         if (N == 1) {
//             return 1;
//         }
//         // Recursive case: sum of N and sum of first N-1 numbers
//         return N + sum(N - 1);
//     }
// };

// int main(){
//     int N;
//     cout << "Enter a positive integer N: ";
//     cin >> N;

//     int sum = Solution().sum(N);
//     cout << "The sum of the first " << N << " natural numbers is: " << sum << endl;
//     return 0;
// }

// Recursive function to calculate the sum of first N natural numbers using brute force recursion

class Solution{
public:
    int sum(int N,int i,int ans) {
        //base case
        if(i>N){
            return ans;
        }
        //recursive case
        return sum(N,i+1,ans+i);
    }
};

//driver code
int main(){
    int N;
    cout << "Enter a positive integer N: ";
    cin >> N;

    int sum = Solution().sum(N,1,0);
    cout << "The sum of the first " << N << " natural numbers is: " << sum << endl;
    return 0;
}