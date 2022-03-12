#include <iostream>

using namespace std;

int main(){
    int sum = 0;
    int n;
    cout << "Enter an integer (n) : ";  
    cin >> n;

    for (int i = 1;i <= n ;i++){
        sum = sum + i;
    }
    cout << "sum(1..n) = " << sum << endl;

    return 0;
}