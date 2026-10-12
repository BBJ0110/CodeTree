#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int h, w;
    if (!(cin >> h >> w)) return 0;

    int b = (w * 10000) / (h * h);
    cout << b << '\n';

    if (b >= 25) {
        cout << "Obesity\n";
    }
    return 0;
}