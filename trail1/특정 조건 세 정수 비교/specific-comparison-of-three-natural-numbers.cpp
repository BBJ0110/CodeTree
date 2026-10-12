#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a, b, c;
    cin >> a >> b >> c;

    int is_first_min = (a <= b && a <= c) ? 1 : 0;
    int is_all_equal = (a == b && b == c) ? 1 : 0;

    cout << is_first_min << ' ' << is_all_equal << '\n';
    
    return 0;
}