#include <iostream>
using namespace std;

void drawLine(int n, char j = '*')
{
    
    for (int a = 0; n > 0; n--){
        cout << j;
    }
    cout << endl;

}

int main()
{
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++)
        drawLine(i,(n % 2 == 0)?'#':'*');

    return 0;
}