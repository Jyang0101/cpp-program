#include <iostream>

using namespace std;

int main()
{
    int g;

    while (cin >> g)
    {
        if (g >= 90)
            cout << "A+";
        else if (g >= 85)
            cout << "A";
        else if (g >= 80)
            cout << "A-";
        else if (g >= 77)
            cout << "B+";
        else if (g >= 73)
            cout << "B";
        else if (g >= 70)
            cout << "B-";
        else if (g >= 67)
            cout << "C+";
        else if (g >= 63)
            cout << "C";
        else if (g >= 60)
            cout << "C-";
        else if (g >= 50)
            cout << "D";
        else if (g >= 1)
            cout << "E";
        else if (g >= 0)
            cout << "X";
        cout << endl;
    }

    return 0;
}