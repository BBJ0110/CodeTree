#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a_count = 0;

    for (int i = 0; i < 3; ++i) {
        char symptom;
        double temp;
        cin >> symptom >> temp;

        if (symptom == 'Y' && temp >= 37.0) {
            a_count++;
        }
    }

    if (a_count >= 2) {
        cout << "E" << endl;
    } else {
        cout << "N" << endl;
    }
    return 0;
}