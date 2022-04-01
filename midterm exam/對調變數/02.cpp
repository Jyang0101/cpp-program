#include <iostream>

using namespace std;

int main()
{
    int a = 9;
    int b = 7;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl
         << endl;

    int c = a;
    a = b;
    b = c;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl
         << endl;

    return 0;
}