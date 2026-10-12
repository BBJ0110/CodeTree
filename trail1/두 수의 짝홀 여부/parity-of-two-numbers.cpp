#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a, b;
    cin >> a >> b;

    string parity[] = {"even", "odd"};

    cout << parity[a % 2] << "\n" << parity[b % 2];
    return 0;
}