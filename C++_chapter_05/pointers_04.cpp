#include <iostream>

#define Log(x) std :: cout << x << std ::endl;


int main ()
{
    int a= 5;

// if u want to change the value of a to other value then u can follo the following steps but remember the main thing that u are copying the value of b to a not the address. still the address of a is same as old and refrence are not reassigneable...    
    // int &r=a;
    // int b= 10;
    // r=b;
    // Log(a);
    

// still if u dont ant to change the value of a but the reference r can be moved to other value then u can acjhieve iut by folloing terms pointers are reassigneables and not the address of r refreence is change to b's address.. 
    int* rr = &a;
    int b= 10;
    rr= &b;
    Log(a);
    return 0;
}



// Reference version:
// "r = b;" copies b’s VALUE into a (since r refers to a).
// The address of a stays the same. References cannot be reassigned.


// Pointer version:
// "rr = &b;" changes rr to POINT to b instead of a.
// The pointer is reassigned, not the address of a or b.
// 'a' stays unchanged.