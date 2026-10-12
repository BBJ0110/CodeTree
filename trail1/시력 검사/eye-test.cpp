#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    double left, right;
    if (!(std::cin >> left >> right)) return 0;

    if (left >= 1.0 && right >= 1.0) {
        std::cout << "High\n";
    } else if (left >= 0.5 && right >= 0.5) {
        std::cout << "Middle\n";
    } else {
        std::cout << "Low\n";
    }
    return 0;
}