#include <iostream>
#include "header.h"
// #include <iostream>
// // define is also a preproccessor which actually fisrt search for the name or variable e given and replace it with value.
// // syntax :->  #define variable_name value

// #define Id 800
// #define Log(x) std :: cout << x <<  Id << std :: endl;
// void print()
// {
//     Log("hello,you are authenticated and your id is :->");
// }




#include "header_02.hpp"
// #define debug 1




int main()
{
    #if debug
        print();
    #else 
     std::cout << "unauthenticated" << std :: endl;
    #endif
    system("PAUSE");
    return 0;
#include "header_01.h"