#include <iostream>

using namespace std;

int main() 
{
    int width, height;

    cin >> width >> height;

    width += 8;     
    height *= 3;    
    int area = width * height;

    cout << width << "\n";
    cout << height << "\n";
    cout << area << "\n";

    return 0;
}