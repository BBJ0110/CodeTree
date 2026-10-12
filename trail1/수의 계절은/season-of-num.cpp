#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int m;
    cin >> m;
    cout << (m < 3 || m == 12 ? "Winter" : m < 6 ? "Spring" : m < 9 ? "Summer" : "Fall");
    return 0;
}