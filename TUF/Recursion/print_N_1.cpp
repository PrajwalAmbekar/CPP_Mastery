#include <iostream>
using namespace std;

class Solution {
    public:
    void print_N_1( int N){
        // base case
        if( N <= 0){
            return;
        }
        cout << N << " " ;
        print_N_1( N-1 );
    }
};

int main(){
    Solution obj;
    int N;
    cout << "Enter the number: ";
    cin >> N;
    
    obj.print_N_1(N);

    return 0;
}