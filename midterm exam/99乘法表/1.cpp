#include <iostream>

using namespace std;

int main()
{
    int i,j,t;

    for(i = 1;i <= 9;i++)
    {
        for( j = 1; j <= i; j++)
        {
            t = j * i;
            cout << j << " * " << i << " = " << t << "\t"; 
        }
    cout << endl;
    }
    return 0;
}