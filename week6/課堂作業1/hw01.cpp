#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int sum = 0;
    int avg = 0;
    int max = 0;
    int min ;
    int a = 0;
    int g;

    cout << endl;

    while (cin >> g)
    {

        sum = sum + g;
        a++;

        if (max < g){
            max = g;
        }
        if (min > g) {
            min = g;
        }
    }
    
    cout << endl;
    cout << "sum = " << sum << endl;
    cout << "avg = " << sum/a << endl;
    cout << "max = " << max << endl;
    cout << "min = " << min << endl;

    return 0;

}