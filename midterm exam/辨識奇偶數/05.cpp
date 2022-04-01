#include <iostream>

using namespace std;

int main()
{
    int a;

    cout << "Please enter an integer (a) : ";
    cin >> a;

    if (a % 2 == 0)
    {
        cout << a << " : even" << endl;
    }
    else
    {
        cout << a << " : odd" << endl;
    }

    return 0;
}