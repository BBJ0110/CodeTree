#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a;
    std::cin >> a;
    std::cout << (a % 13 == 0 || a % 19 == 0 ? "True" : "False") << '\n';
    
    return 0;
}