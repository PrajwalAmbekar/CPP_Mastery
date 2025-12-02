#include <iostream>
using namespace std;
int main()
{
    cout << "Namaste Dunia" << endl;
    // DATA TYPES IN C++
    /*
    1. Primitive Data Types
       a. int
       b. float
       c. double
       d. char
       e. bool
    */

    // int a = 10;
    // cout << "Value of a: " << a << endl;

    // float b = 5.5;
    // cout << "Value of b: " << b << endl;

    // double c = 9.99;
    // cout << "Value of c: " << c << endl;

    // char d = 'A';
    // cout << "Value of d: " << d << endl;

    // bool e = 1;
    // cout << "Value of e is :" << e << endl;

    // int size_of_int = sizeof(a);
    // cout << "Size of int: " << size_of_int << " bytes" << endl;

    // int size_of_float = sizeof(b);
    // cout << "Size of float: " << size_of_float << " bytes" << endl;

    // int size_of_double = sizeof(c);
    // cout << "Size of double: " << size_of_double << " bytes" << endl;

    // int size_of_char = sizeof(d);
    // cout << "Size of char: " << size_of_char << " bytes" << endl;

    // int size_of_bool = sizeof(e);
    // cout << "Size of bool is: " << size_of_bool << " bytes" << endl;

    /* Type Casting*/

    int ch = 'A';
    cout << "Value of ch is :" << ch << endl;

    char ch2 = 123456789;
    cout << "Value of ch2 is :" << ch2 << endl; //here the range of char is only 1 byte but the range of int is of 4 bytes and given numbver is out of range from the char so it will print some garbage value.    

    return 0;
}