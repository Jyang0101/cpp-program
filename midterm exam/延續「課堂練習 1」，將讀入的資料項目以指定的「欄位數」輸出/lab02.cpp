#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int g;
    int cnt = 0;
    int col;

    cin >> col;

    while (cin >> g)
    {
        cout << setw(5) << g;
        cnt++;
        if (cnt % col == 0)
            cout << endl;
    }

    cout << "\nData coutns : " << cnt << endl;

    return 0;
}