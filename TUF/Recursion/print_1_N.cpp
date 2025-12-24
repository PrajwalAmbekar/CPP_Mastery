#include <iostream>
using namespace std;


class Solution {
    public:
    void print_1_N( int n){
        //base case 
        if( n <= 0){
            return;
        }
        print_1_N( n-1 );
        cout << n << " " ;
    }
};
int main(){
    Solution obj;
    int N;
    cout << "Enter the number: " ;
    cin >> N;

    obj.print_1_N( N );
    return 0;
}
