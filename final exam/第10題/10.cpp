#include <iostream>
#include <iomanip>

using namespace std;

int index(int arr[], int len, int val)
{
    int i = 0;
    while (i < len)
    {
        if(arr[i] == val) return i;
        i++;
    }
    return -1;
}

int main()
{
    int arr[100];
    int len = 0;
    while (cin >> arr[len++])
        ;
    len--;

    for(int i=0; i<10; i++)
        cout << index(arr,len,i) << " ";
    cout << endl;

    return 0;
}