#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int t;
    cin >> t;
    cout << (t < 0 ? "ice" : (t >= 100 ? "vapor" : "water"));
    return 0;
}