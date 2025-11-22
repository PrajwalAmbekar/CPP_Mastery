#include <iostream>

void via_reference(int &r) {
    std::cout << "inside ref, address of r: " << &r << ", value: " << r << '\n';
    r++;
}

void via_pointer(int *p) {
    std::cout << "inside ptr, value of p: " << p << ", address-of-p: " << &p << ", *p: " << *p << '\n';
    (*p)++;
}

int main() {
    int a = 5;
    std::cout << "main: address of a: " << &a << ", value: " << a << '\n';

    via_reference(a);
    std::cout << "after via_reference, a = " << a << '\n';

    via_pointer(&a);
    std::cout << "after via_pointer, a = " << a << '\n';

    return 0;
}
