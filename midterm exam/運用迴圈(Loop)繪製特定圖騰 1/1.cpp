#include <iostream>

using namespace std;

int main()
{

    for (int j = 5; j >0 ; j--)
    {
        for (int i = 0; i < j; i++)
            cout << "*";
        cout << endl;
    }
    for (int j = 2; j <6; j++)
    {
        for (int i = 0; i < j; i++)
            cout << "*";
        cout << endl;
    }

    return 0;
}