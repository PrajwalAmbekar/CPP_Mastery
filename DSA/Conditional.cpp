#include <iostream>
using namespace std;

int main()
{
    // Example of if-else conditional statement
    // Check if a number is positive, negative, or zero
    int num;
    cout << "Enter the number to be checked : ";
    cin >> num;
    if(num > 0)
    {
        cout  << "The number entered is positive." << endl;

    }
    else if (num < 0)
    {
        cout << "The number entered is negative. " << endl;
    }
    else{
        cout << "The number entered is zero. "<< endl;
    }

    /* compare given to numbers*/
    int a,b;
    cout << "enter two numbers to be compared : ";
    cin >> a >> b;
    if (a > b ){
        cout << "The number a : " << a << " is greater than b : " << b << endl;
    }
    else if (a < b){
        cout << "The number b : " << b << " is greater than a : " << a << endl;
    }
    else{
        cout << "Both numbers are equal. " << endl;
    }
    return 0;

    /*  difference between cin and cin.get()*/
    int a;
    a=cin.get();//reads a single character and returns its ASCII value including whitespace and newline characters and stores it in variable a.
    cout << "The ASCII value of the character entered is : " << a << endl;
    return 0;


    /* Check given character is lowercase or uppercase or digit*/
     char ch;
     cout << "enter a character : ";
     cin >> ch;
        if (ch >= 'a' && ch <= 'z'){
            cout << "The character entered is a lowercase letter. " << endl;
        }
        else if (ch >= 'A' && ch <= 'Z'){
            cout << "The character entered is an uppercase letter. " << endl;
        }
        else if (ch >= '0' && ch <= '9'){
            cout << "The character entered is a digit. " << endl;
        }
        else{
            cout << "The character entered is a special character. " << endl;
        }
        return 0;

}