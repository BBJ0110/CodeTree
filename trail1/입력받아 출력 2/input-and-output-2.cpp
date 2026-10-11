#include <iostream>

using namespace std;

int main() {
    int front, back;
    char hyphen;
    
    if (cin >> front >> hyphen >> back) {
        cout << front << back << '\n';
    }
    
    return 0;
}