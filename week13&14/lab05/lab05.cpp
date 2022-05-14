#include <iostream>
#include <iomanip>

using namespace std;

int nthNum(int dat[], int len, int n = 0)
{
    int i = 0;

    while(i < len)
    {
        int cnt = 0;
        int j = 0;

        while(j < len)
        {
            if ( dat[i] > dat[j] )
                cnt++;
        j++;        
        }
        if (cnt == n)
            return dat[i];
    i++;
    }
    return -1;
}

int main()
{
    int dat[100];
    int cnt = 0;

    while (cin >> dat[cnt++])
        ;
    cnt--;

    cout << nthNum(dat, cnt, 0)<<endl;
    cout << nthNum(dat, cnt, 1)<<endl;
    cout << nthNum(dat, cnt, cnt/3)<<endl;
    cout << nthNum(dat, cnt, cnt/2)<<endl;
    cout << nthNum(dat, cnt, cnt-1)<<endl;

    return 0;
}