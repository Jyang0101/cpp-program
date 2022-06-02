#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    int m;
    int sum = 0;

    cin >> m;
    cin >> n;


    int i = 1;

    while (i <= n)
    {
        if (i % m == 0)
            sum = sum + i;
            
           
        i++;
    }
    cout << sum;

    cout << endl;
    return 0;
}