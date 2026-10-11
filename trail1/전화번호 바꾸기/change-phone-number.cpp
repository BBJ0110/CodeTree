#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string phone_number;
    cin >> phone_number;

    string prefix = phone_number.substr(0, 4); 
    string mid = phone_number.substr(4, 4);    
    string suffix = phone_number.substr(9, 4);  

    cout << prefix << suffix << "-" << mid << "\n";

    return 0;
}