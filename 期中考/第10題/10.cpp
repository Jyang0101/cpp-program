#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    int cnt = 0;

    while (cin >> n)
    {
        
        while (n > 0)
        {
            if (n % 10 == 7)
                cnt++;
            n /= 10;
        }
    }

    cout << endl
         <<  cnt << endl;

    return 0;
}
