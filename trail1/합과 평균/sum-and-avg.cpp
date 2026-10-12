#include <iostream>
using namespace std;

int main() {
        int a, b;
    cin >> a >> b;

    int sum = a + b;
    double average = sum / 2.0; 

    cout << fixed;
    cout.precision(1);

    // 합과 평균을 출력합니다.
    cout << sum << " " << average << endl;


    return 0;
}