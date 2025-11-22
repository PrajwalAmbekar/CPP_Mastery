#include <iostream>
//derefrence the pointer  to get the exact value present in the pointer follow following syntax int *p;
#define Log(x) std :: cout << "the pointer is pointing to address :-> " << x << " and the value present in that address is :-> " << *x << std :: endl;

int main()
{
    int a = 5;
    int *p=&a;
    Log(p);
    system("PAUSE");
    return 0;
}