#include <iostream>
#include <iomanip>

using namespace std;

void dump(int dat[], int a)
{
    int i = 0;
    while (i < a)
    {
        cout << setw(5) << dat[i];

        i++;

    }
}

void reverse(int dat[], int a)
{
    int i = 0;
    while(i < a/2)
    {
        swap(dat[i], dat[a-i-1]);
        i++;
    }
}

int main()
{
    int arr[100];
    int i = 0;
    while(cin>>arr[i++]);
    i--;
    reverse(arr,i);
    dump(arr,i);

    return 0;
}