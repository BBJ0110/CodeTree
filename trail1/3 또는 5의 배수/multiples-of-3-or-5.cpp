#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a;
    const char* ans[] = {"YES", "NO"};
    
    cin >> a;
    cout << ans[a % 3 != 0] << "\n" << ans[a % 5 != 0];
    return 0;
}