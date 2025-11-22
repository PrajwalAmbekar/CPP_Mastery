#include <iostream>
#define Log(x) std :: cout << x << std :: endl;

void no_increment(int value)
{
    value++;
}
void increment(int *value)
{
    *value++; 
    //this will increment the address :-> value++ → increments the pointer, not the value.If an int takes 4 bytes, value now points to 1004.* → dereference the new address (1004) → which doesn’t belong to a.
    (*value)++;
    //*value → access what’s stored at address 1000 (a’s value = 5)(*value)++ → increment that value to 6,a becomes 6 ✅
}
int main()
{
    int a  = 5;
    no_increment(a);
    increment(&a);
    Log(a);
    return 0;
}