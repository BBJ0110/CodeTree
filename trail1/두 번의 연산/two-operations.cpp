#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a;
    std::cin >> a;

    if (a % 2 != 0) a += 3;
    if (a % 3 == 0) a /= 3;

    std::cout << a;
    return 0;
}