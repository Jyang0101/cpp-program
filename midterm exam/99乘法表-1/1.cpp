#include<iostream>
using namespace std;

int main()
{
    int i, j, t;
    for (i = 1; i < j; i++)
    {
        for (j = 1; j <= 9; j++)
        {
            t = i * j;
            cout << i << "*" << j << "=" << t << "\t ";
         }
        cout << endl;
    }
    return 0;
}