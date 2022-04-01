#include <iostream>

using namespace std;

int main()
{
    int i,j,k;
    int n;

    cout << "Enter an integer : ";
    cin >> n;

    for(i = 1;i <= n;i++)
    {
        for( j = 1; j <= n; j++)
        {
            k = j * i;
            cout << j << " * " << i << " = " << k << "\t"; 
        }
    cout << endl;
    }
    return 0;
}