#include <iostream>
#include <iomanip>

using namespace std;


void dump(int dat[], int len)
{
    int i = 0;
    while (i < len)
    {
        cout << setw(5) << dat[i];
        i++;
    }
    cout << endl;
}

int main()
{
    int arr[100];
    int i = 0;

    while(cin>>arr[i++]);
    i--;
    
    dump(arr,i);

    return 0;
}