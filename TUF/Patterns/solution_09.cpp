// Optimized Version - Works for both EVEN and ODD rows
#include <iostream>
using namespace std;

int main(){
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

    int mid = (rows + 1) / 2;
    int maxStars = 2 * mid - 1;

    for(int i = 1; i <= rows; i++)
    {
        int stars;
        if(i <= mid)
            stars = 2*i - 1;                // top half
        else
            stars = 2*(rows - i + 1) - 1;    // bottom half

        int spaces = (maxStars - stars) / 2;

        // print spaces
        for(int s = 1; s <= spaces; s++)
            cout << " ";
        // print stars
        for(int s = 1; s <= stars; s++)
            cout << "*";

        cout << endl;
    }
}
// Optimized Version - Works for both EVEN and ODD rows
#include <iostream>
using namespace std;

int main(){
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

    int mid = (rows + 1) / 2;
    int maxStars = 2 * mid - 1;

    for(int i = 1; i <= rows; i++)
    {
        int stars;
        if(i <= mid)
            stars = 2*i - 1;                // top half
        else
            stars = 2*(rows - i + 1) - 1;    // bottom half

        int spaces = (maxStars - stars) / 2;

        // print spaces
        for(int s = 1; s <= spaces; s++)
            cout << " ";
        // print stars
        for(int s = 1; s <= stars; s++)
            cout << "*";

        cout << endl;
    }
}
