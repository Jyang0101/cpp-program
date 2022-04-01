#include <iostream>
#include <climits>

using namespace std;

int main()
{
    int p, n;

    cout << "sizeof(int) = " << sizeof(int) << endl;
    cout << "Max Integer = " << INT_MAX << endl;
    cout << "Min Integer = " << INT_MIN << endl;

    p = INT_MAX;
    n = INT_MIN;
    cout << "p = " << p << endl;
    cout << "n = " << n << endl;
    cout << "(p + 1) = " << (p + 1) << endl;
    cout << "(n - 1) = " << (n - 1) << endl;

    return 0;
}