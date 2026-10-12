#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int g, a;
    if (cin >> g >> a)
        cout << (g ? (a >= 19 ? "WOMAN" : "GIRL") : (a >= 19 ? "MAN" : "BOY"));

    return 0;
}