#include <iostream>

using namespace std;

int main()
{
    int n;
    int i = 0;
    int sum = 0;

    while(cin >> n)
    {

        sum = sum + n;

        i++;
    }

    cout << sum << endl;

return 0;
}