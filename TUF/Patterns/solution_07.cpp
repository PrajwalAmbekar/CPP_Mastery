#include <iostream>
using namespace std;

int main(){
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;
    int i = 1;
    while( i <= rows){
        int space = i-1;
        while(space){
            cout << " ";
            space--;
        }
        space= i-1; // or we can use 2*rows - 2*i +1;
        int j = 1;
        while( j <= 2*rows - space - i){
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}