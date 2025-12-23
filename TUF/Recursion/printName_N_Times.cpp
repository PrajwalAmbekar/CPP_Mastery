#include <iostream>
using namespace std;

class Solution{
    public:
    void printName(string name,int N){
        //base condition
        if(N <= 0){
            return ;
        }
        cout << name << endl;
        printName(name,N-1);
    }
};
int main(){
    string name;
    cout << "Enter your Name to print n times" << endl;
    cin >> name;
    int N;
    cout << "Enter the number to print name these many times" << endl;
    cin >> N;
    Solution obj;
    obj.printName(name,N);
    return 0;


}