#include <iostream>

using namespace std;

int main(){

    int g;

    while (cin >> g)
    {

    cout << g <<"|";
    for(int i = 1; i <= g ; i = i + 1){
        cout << "*" ;
    }cout<<endl; 
    }


    return 0;
}