#include <iostream>
using namespace std;

int main() {
    float n, result;

    std::cin >> n;
    result = 30.48f * n;

    cout << fixed;
    cout.precision(1);
    
    std::cout << result;
    return 0;
}