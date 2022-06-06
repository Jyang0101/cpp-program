#include <iostream>
#include <iomanip>

using namespace std;

void dump(int dat[], int n, int x = 5, int col = 5)
{
    int i;

    while(i < n)
    {
        cout << setw(x) << dat[i];
        if ((i + 1) % col == 0) cout << endl;
        i++;
    }

    if (i % col != 0) cout << endl;
}

int main()
{
    int dat[100];
    int len = 0;
    
    while(cin >> dat[len])
    {
        len++;
    }
    

    dump(dat,len);
    cout<<endl;
    dump(dat,len,10);
    cout<<endl;
    dump(dat,len,10,3);

    return 0;
}