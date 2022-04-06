#include <iostream>
using namespace std;

int main()
{
	int g;
    int sum = 0;
	
while (cin >> g){

	if (g % 3 != 0 && g % 4 != 0){
		cout << "    " << g ;
        sum = sum + g;
	}



	}
cout << endl;
cout << "sum of n3n4 # = " << sum <<endl;

	return 0;
}