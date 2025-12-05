#include <iostream>
using namespace std;


int main (){
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;
    int i = 1;
    while(i <= rows){
        int space =rows - i;
        while(space){
            cout << " ";
            space--;
        }
        space = rows - i;
        int j = 1;
        while(j <= 2*i-1){
            cout << "*";
            j++;
        }
        while (space){
            cout << " ";
            space--;
        }
        cout << endl;
        i++;
    }
    return 0;
}