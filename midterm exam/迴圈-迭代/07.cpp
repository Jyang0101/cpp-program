#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter an integer (n) : ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cout << i << " x " << i << " = " << i * i << endl;
    }
    cout << endl;

    return 0;
}