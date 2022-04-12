#include <iostream>

using namespace std;

int main()
{
    int g; 
    int n = 0;

    cout << endl;
    
    while (cin >> g){

        cout << "    " << g ;

        if (g == 3){
            n = n + 1;
        }

    }
    
    cout << endl;
    cout << "Counting the number of digi 3 : " << n << endl;
    return 0;
}