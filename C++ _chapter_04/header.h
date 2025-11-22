#include <iostream>
// define is also a preproccessor which actually fisrt search for the name or variable e given and replace it with value.
// syntax :->  #define variable_name value

#define Id 800
#define Log(x) std :: cout << x <<  Id << std :: endl;
void print()
{
    Log("hello,you are authenticated and your id is :-> ");
}