// Q4.WAP for finding the volume of the cylinder by taking radius and height as input.

#include <iostream>
using namespace std;
int main()
{
    int radius, height;
    cout << "Enter the radius and height of cylinder" << endl;
    cin >> radius >> height;
    int pi = 3.14;
    int volume = pi * radius * radius * height;
    cout << volume;
    return 0;
}