#include <iostream>
using namespace std;

int main() {
    float n, result;

    std::cin >> n;
    result = n + 1.5f;

    cout << fixed;
    cout.precision(2);
    
    std::cout << result;
    return 0;
}