#include <iostream>

using namespace std;

int main() 
{
    double a, b;
    cin >> a >> b;
    double result = (a + b) / (a - b);
    
    cout << fixed;
    cout.precision(2);
    
    cout << result << endl;
    
    return 0;
}