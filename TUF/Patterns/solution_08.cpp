#include <Iostream>
using namespace std;

int main(){
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;
    int i = 1;
    int half = (rows + 1) / 2;
    while (i <= half)
    {
        int space = half - i;
        while (space)
        {
            cout << " ";
            space--;
        }
        int j = 1;
        while (j <= 2 * i - 1)
        {
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
    }
    while (i > half && i <= rows)
    {
        int space = i - half - 1;
        while (space)
        {
            cout << " ";
            space--;
        }
        space = i - half - 1;
        int j = 1;
        while (j <= rows - 1 - 2*(space))
        {
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
    }
    
}