#include <iostream>
#include <iomanip>

using namespace std;

void bbsort(int arr[], int a)
{
    int i = 0;
    while(i < a-1)
    {
        int j = i +1;
        while(j < a)
        {
            if (arr[i] > arr[j])
            {
                int c = arr[i];
                arr[i] = arr[j];
                arr[j] = c;
            }
            j++;
        }
        i++;
    }
}

void dump(int arr[], int a)
{
    int i = 0;
    while (i < a)
    {
        cout << setw(5) << arr[i];

        i++;

    }
}

int main()
{
    int arr[100];
    int i = 0;
    while(cin>>arr[i++]);
    i--;
    bbsort(arr,i);
    dump(arr,i);

    return 0;
}