#include <iostream>
using namespace std;

int main(){
	int n;
    // cout << "Enter an integer (n) : ";
	cin >> n ;
	
	for (int i = 3;i <= n;i ++){
		if (i % 3 == 0){
			cout << "    " << i ;
		}
	}
	return 0;
}