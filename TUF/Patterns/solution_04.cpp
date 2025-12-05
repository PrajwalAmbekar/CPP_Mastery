#include <iostream>
using namespace std;

int main(){
    int rows, cols ;
    cout << "Enter the rows : ";
    cin >> rows ;
    int i = 1 ;
    while (i  <= rows){
        int j = i;
        while (j <= rows ){
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0 ;
}