#include <iostream>
using namespace std;

void myFunction()
{
    cout << "C/C++ is one of the most important computer languages for EECS students." << endl;
}

int main()
{
    int n;
    cin >> n;

    for(int i = 1; i <= n ; i++)
    {
        myFunction();
    }

    return 0;
}