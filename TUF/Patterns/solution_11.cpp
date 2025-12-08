#include <iostream>
using namespace std;

int main(){
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;
    int i = 1;
    while(i <= rows){
        int j = 1;
        while(j <= i){
            if ((i+j) % 2 == 1 ){
                cout << "0 ";
                j++;
            }
            else {
                cout << "1 ";
                j++;
            }
        }
        cout << endl;
        i++;
    }
    return 0;
}