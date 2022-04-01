#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int g;
    int col = -1;

    while (cin >> g)
    {
        if (col < 0)
        {
            col = g - 1;
            cout << endl;
        }
        else
        {
            cout << setw(5) << g;
            col--;
        }
    }

    return 0;
}