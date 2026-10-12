#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int ma, ea, mb, eb;
    cin >> ma >> ea >> mb >> eb;
    cout << (ma != mb ? (ma > mb ? 'A' : 'B') : (ea > eb ? 'A' : 'B'));
    return 0;
}