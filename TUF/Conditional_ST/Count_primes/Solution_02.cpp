#include <iostream>
using namespace std;

int main()
{
    int count = 0;
    int i = 2;
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (n <= 2)
    {
        cout << "There are no prime numbers less than or equal to 2." << endl;
        return 0;
    }
    else
    {
        while (i < n)
        {
            int x = 0;
            int j = 2;
            while (j <= i - 1)
            {
                if (i % j == 0)
                {
                    x = 1;
                    break;
                }
                j++;
            }
            if (x == 0)
            {
                count++;
            }
            i++;
        }

        cout << "Total prime numbers between 1 and " << n << " is: " << count << endl;
    }
    return 0;
}