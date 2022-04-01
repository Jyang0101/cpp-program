#include <iostream>

using namespace std;

int main()
{

    for (int j = 1; j < 6; j++)
    {
        for (int i = 1; i < j; i++)
            cout << " ";
        cout << j << endl;
    }
    for (int j = 4; j > 0; j--)
    {
        for (int i = 1; i < j; i++)
            cout << " ";
        cout << j << endl;
    }

    return 0;
}