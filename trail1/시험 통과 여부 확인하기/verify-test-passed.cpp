#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
     const int PASS_SCORE = 80;
    int score;

    if (!(cin >> score)) return 0;

    if (score >= PASS_SCORE) {
        cout << "pass\n";
    } else {
        cout << (PASS_SCORE - score) << " more score\n";
    }
    return 0;
}