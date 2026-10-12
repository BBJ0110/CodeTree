#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a, b;
    cin >> b >> a;
    for (int i = (b | 1); i >= a; i -= 2) 
        cout << i << ' ';
    return 0;
}