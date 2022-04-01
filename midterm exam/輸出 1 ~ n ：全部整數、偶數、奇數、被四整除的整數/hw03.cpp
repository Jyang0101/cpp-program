#include <iostream>
using namespace std;

int main()
{
    int i,j,a,b;
    int n;
    cout << "Enter an integer (n) : ";
    cin >> n;
    
    cout << "All    : ";
    for( i = 1; i <= n ;  i++){    
         cout << i << " ";       
    }

    cout << "\nEven   : ";
    for ( j = 1; j <= n; j++){
        if ( j % 2 == 0){
        cout << j << " ";
        }
    }

    cout << "\nOdd    : ";
    for ( a = 1; a <= n; a++){
        if ( a % 2 != 0){
        cout << a << " ";
        }
    }
        
    cout << "\nDiv. 4 : ";
    for ( b = 1; b <= n; b++){
        if ( b % 4 ==0){
        cout << b << " ";
        }
    }

return 0;
}