#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int y;
    std::cin >> y;
    std::cout << ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0) ? "true" : "false") << '\n';
    return 0;
}