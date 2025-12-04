#include <iostream>
using namespace std;

int main (){

    int row,cols;
    cout << "Enter number of rows: ";
    cin >> row; 
    cout << "Enter number of columns: ";
    cin >> cols;

    int i=1;
    while( i <= row ){
        int j = 1;
        while( j <= cols ){
            cout << "* ";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}