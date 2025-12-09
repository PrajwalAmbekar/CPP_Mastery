#include <iostream>
using namespace std;

int main(){
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;
    cout << " the logical operators results are: " << endl;
    cout << "a & b is " << (a & b ) << endl;
    cout << "a | b is " << (a | b ) << endl;
    cout << "a ^ b is " << (a ^ b ) << endl;
    cout << "~a is " << (~a ) << endl; // for compliment or not operator the output is in negative form as first e convert it to binary and we take 2's complement of it. 
    cout << "The shift operators results are: " << endl;
    cout << "a << 1 is " << (a << 1 ) << endl; // for positive numbers left shift is equivalent to multiplying by 2 and right shift is equivalent to dividing by 2. but it is for small numbers only.
    // for negative numbers the behaviour of shift operators is implementation defined. and it is completely dependent on the compiler.
    cout << "a >> 1 is " << (a >> 1 ) << endl;

    int i = 3;
    cout << "The increment and decrement operators results are: " << endl;
    cout << "i++ is " << (i++ ) << endl; // post increment:- first the value is used and then it is incremented. therefore the output will be 3 here. then i becomes 4.
    cout << "++i is " << (++i ) << endl; // pre increment:- first the value is incremented and then it is used. therefore the output will be 5 here. so i becomes 5.
    cout << "i-- is " << (i-- ) << endl; // post decrement:- first the value is used and then it is decremented. therefore the output will be 5 here. then i becomes 4.
    cout << "--i is " << (--i ) << endl; // pre decrement:- first the value is decremented and then it is used. therefore the output will be 3 here. so i becomes 3.
    return 0;
}