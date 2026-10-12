#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int m, f, s = 0;
    if (cin >> m >> f && m >= 90) {
        if (f >= 95) s = 100000;
        else if (f >= 90) s = 50000;
    }
    cout << s;
    return 0;
}