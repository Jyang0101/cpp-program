#include <iostream>
#include <iomanip>

using namespace std;

int nth(int dat[], int len, int num){
    for(int j = 0; j < len; j++){
            int con = 0;
            for(int k = 0; k < len; k++){
                if(dat[j] > dat[k]) con++;
            }
            if(con == num) return dat[j];
        }
    return -1;
}

int main()
{
    int dat[100];
    int len = 0;

    while (cin >> dat[len])
    {
        len++;
    }

    cout << "Min  : " << setw(4) << nth(dat, len, 0) << endl;
    cout << "Max  : " << setw(4) << nth(dat, len, len - 1) << endl;

    cout << "Sort : ";
    for (int i = 0; i < len; i++)
    {
        cout << setw(4) << nth(dat, len, i);
    }
    cout << endl;

    return 0;
}