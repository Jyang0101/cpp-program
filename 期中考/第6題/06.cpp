#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int g;
    int i,j;

    while (cin >> g)
    {
        cout << setw(2) << g << ":" << setw(2);
        
        for( i = 1; i <= g ; i++){
            if(g % 2 == 0){
            cout << "#" ;
            }
        }

        for( j = 1; j <= g ; j++){
            if(g % 2 != 0){
            cout << "*" ;
            }
        }
    cout << endl;
    }


    return 0;
}