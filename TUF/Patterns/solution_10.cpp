#include <iostream>
using namespace std;

int main (){
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;
    int mid= (rows + 1) / 2;
    int i = 1;
    while (i <= rows)
    {
        if (i <= mid){
            int j = 1;
            while( j <= i){
                cout << "* ";
                j++;
            }
            cout << endl;
            i++;
        }
        else {
            int j = 1;
            while( j <= rows - i + 1){
                cout << "* ";
                j++;
            }
            cout << endl;
            i++;
        }
    }
    return 0;
}