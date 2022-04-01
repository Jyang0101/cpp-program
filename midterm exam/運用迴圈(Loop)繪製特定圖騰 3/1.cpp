#include <iostream>

using namespace std;

int main()
{
    int n;

    cout << "Enter an integer : ";
    cin >> n;

    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < j; i++)
            cout << " ";
        cout << "*";
        for (int i = 1; i < (n - j - 1) * 2; i++)
            cout << " ";
        if (j < n - 1)
            cout << "*" << endl;
    }

    return 0;
}