#include <iostream>

using namespace std;

int main()
{
    int a, b;

    a = 123;
    b = 100;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "(a + b)        = " << (a + b) << endl;
    cout << "(a - b)        = " << (a - b) << endl;
    cout << "(a * b)        = " << (a * b) << endl;
    cout << "(a / b)        = " << (a / b) << endl;
    cout << "(a / 100.0)    = " << (a / 100.0) << endl;
    cout << "(a / (float)b) = " << (a / (float)b) << endl;
    cout << "(a % 100)      = " << (a % 100) << endl;

    return 0;
}