#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a, b;
    cin >> a >> b;
    for (int i = (a | 1); i <= b; i += 2) {
        cout << i << (i + 2 <= b ? " " : "");
    }
    return 0;
}