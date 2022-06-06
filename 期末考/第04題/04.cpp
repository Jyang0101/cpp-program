#include <iostream>


using namespace std;

int main()
{
    int n;
    int m;

    cin >> m;

    while(cin >> n)
    {
        switch(m)
        {
            case 0:
                cout << "   " << n;
                break;
            
            case 1:
                if(n % 2 != 0)
                    cout << "   " << n;
                break;
            
            case 2:
                if(n % 2 == 0)
                    cout << "   " << n;
                break;
            
            default:
                cout << "   " << n;
        }
    }
    cout << endl;

    return 0;
}