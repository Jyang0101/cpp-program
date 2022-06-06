#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    int m;

    cin >> n;
    cin >> m;

    for (int i = 1; i <= n; i++)
    {
        if (i % m == 0)
            cout << setw(4) << i;
    }
    cout << endl;
    return 0;
}