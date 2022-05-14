#include <iostream>
#include <iomanip>

using namespace std;

void myswap(int& a, int& b)
{
    int c = a;
    a = b;
    b = c;
}

int main()
{
    int x, y;

    cin >> x;
    cin >> y;
    cout << setw(5) << x << setw(5) << y << endl;
    myswap(x, y);
    cout << setw(5) << x << setw(5) << y << endl;

    return 0;
}