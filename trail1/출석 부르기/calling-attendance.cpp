#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string n[] = {"", "John", "Tom", "Paul"};
    int i;
    cin >> i;
    cout << (i >= 1 && i <= 3 ? n[i] : "Vacancy");
    return 0;
}