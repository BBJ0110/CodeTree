#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    float input;
    std::cout << fixed;
    std::cout.precision(3);
    
    for(int i = 0; i < 3; ++i)
    {
        std::cin >> input;
        std::cout << input << '\n';
    }

    return 0;
}