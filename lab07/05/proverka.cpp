#include <iostream>

int main() {
    int a = 1, b = 2;
    std::cout << "To:    a=" << a << " b=" << b << "\n";
    a,b = b,a;
    std::cout << "After: a=" << a << " b=" << b << "\n";
    return 0;
}