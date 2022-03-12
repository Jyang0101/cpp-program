#include<iostream>
using namespace std;

int main()
{
    int n;
    int i, j;
    cout << "Enter an integer (n) : ";
    cin >> n;

    for( i=1 ; i<=n ; i=i+1 )
    {
        for( j=1 ; j<=i ; j=j+1 )
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}