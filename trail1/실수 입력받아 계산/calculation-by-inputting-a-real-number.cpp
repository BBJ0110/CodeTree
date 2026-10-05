#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    float a, b;
    float sum;
    std::cin >> a >> b;
    sum = a + b;

    std::cout << fixed;
    std::cout.precision(2);
    std::cout << sum;

    return 0;
}