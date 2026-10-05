#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    float a, b;
    char c;

    std::cout << fixed;
    std::cout.precision(2);

    std::cin >> c >> a >> b;

    std::cout << c << '\n';
    std::cout << a << '\n';
    std::cout << b << '\n';
    return 0;
}