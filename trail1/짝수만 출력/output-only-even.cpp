#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a, b;
    cin >> a >> b;

    if(a % 2 == 1)
        a = a + 1;
    for(int i = a; i <= b; i += 2)
        std::cout << i << " ";
    return 0;
}