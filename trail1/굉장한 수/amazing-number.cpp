#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
     int n;
    std::cin >> n;

    bool is_great = (n % 2 != 0 && n % 3 == 0) || (n % 2 == 0 && n % 5 == 0);

    std::cout << std::boolalpha << is_great << std::endl;
    return 0;
}