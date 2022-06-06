#include <iostream>
#include <iomanip>

using namespace std;

void copy(int src[], int des[], int sp, int n)
{
    for(int i = 0; i <= (n - sp); i++){
        des[i] = src[i + sp];
    }
}

void dump(int arr[], int len)
{
    for(int i = 0; i < len; i++){
        cout << setw(4) << arr[i];
    }
    cout << endl;
}

int main()
{
    int a1[100];
    int a2[100];

    int len = 0;
    while(cin >> a1[len])
    {
        len++;
    }
    cout << "a1 = ";
    dump(a1, len);

    copy(a1, a2, 3, 7);
    cout << "a1[3] ~ a1[7] =";
    dump(a2, 5);
    copy(a1, a2, 0, 5);
    cout << "a1[0] ~ a1[5] =";
    dump(a2, 6);

    return 0;
}