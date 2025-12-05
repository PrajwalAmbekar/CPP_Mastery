#include <iostream>
using namespace std;

int main(){
    int rows, cols ;
    cout << "Enter the rows : ";
    cin >> rows ;
    cout << "Enter the cols : ";
    cin >> cols ;
    int i = 1 ;
    while (i  <= rows){
        int j = i;
        while (j <= cols ){
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0 ;
}