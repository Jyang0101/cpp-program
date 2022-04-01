#include <iostream>

using namespace std;

int main()
{
    int a = 120;
    int b = 100;

    cout << "a        = " << a << endl;
    cout << "b        = " << b << endl;
    cout << "(a > b)  = " << (a > b) << endl;
    cout << "(a < b)  = " << (a < b) << endl;
    cout << "(a >= a) = " << (a >= a) << endl;
    cout << "(a <= a) = " << (a <= a) << endl;
    cout << "(a == b) = " << (a == b) << endl;
    cout << "(b == b) = " << (b == b) << endl;
    cout << "(a != b) = " << (a != b) << endl;
    cout << "(b != a) = " << (b != a) << endl;
    cout << "(a % 4 == 0) = " << (a % 4 == 0) << endl;
    cout << "(a % 3 != 0) = " << (a % 3 != 0) << endl;
    cout << "(b % 4 == 0) = " << (b % 4 == 0) << endl;
    cout << "(b % 3 == 0) = " << (b % 3 == 0) << endl;
    cout << "(a % 4 == 0) && (a % 3 != 0) = "
         << ((a % 4 == 0) && (a % 3 != 0)) << endl;
    cout << "(b % 4 == 0) || (b % 3 == 0) = "
         << ((b % 4 == 0) || (b % 3 == 0)) << endl;

    return 0;
}