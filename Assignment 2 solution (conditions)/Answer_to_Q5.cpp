// Q5.WAP to find the difference between ASCII of two characters ,take them as input.

#include <iostream>
using namespace std;
int main()
{
    char a, b;
    cout << "Enter two characters :" << endl;
    cin >> a >> b;
    cout << int(b) - int(a) << endl;
    return 0;
}
