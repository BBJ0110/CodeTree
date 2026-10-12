#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a, b, c;
    std::cin >> a >> b >> c;

    int min_ab = (a < b) ? a : b;
    int min_all = (min_ab < c) ? min_ab : c;

    std::cout << min_all;
    return 0;
}