#include <iostream>
using namespace std;

int main()
{
    int rows;
    cout << "Enter the rows ; ";
    cin >> rows;
    int i = 1;
    while (i <= rows)
    {
        int j = 1;
        while (j <= i)
        {
            cout << "* ";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}