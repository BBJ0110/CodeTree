#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a, b;
    cin >> a >> b;

    a = a + a % 2;
    
    for(int i = a; i <= b; i += 2)
        std::cout << i << " ";
    return 0;
}