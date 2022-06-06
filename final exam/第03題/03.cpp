#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    int i = 1;
    int sum = 0;
    int m;

    cin >> m;

    while(cin >> n)
    {
        if(n % m== 0)

        sum = sum + n;

        i++;
    }

    cout << sum << endl;

return 0;
}