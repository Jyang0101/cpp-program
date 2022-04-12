#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d,e,f,g,h,y,z;
    int n;
    int num = 0;

    cout << endl;
    cout << "Enter an integer : ";
    cin >> n;

    if (n < 10000000000){
        a = n / 1000000000;
        //cout << a;
    }

    if (n < 10000000000){
        b = n / 100000000 % 10 ;
        //cout << b;
    }


    if (n < 10000000000){
        c = n / 10000000 % 10;
        //cout << c;
    }

    if (n < 10000000000){
        d = n / 1000000 % 10;
        //cout << d;
    }

    if (n < 10000000000){
        e = n / 100000 % 10;
        //cout << e;
    }

    if (n < 10000000000){
        f = n / 10000 % 10;
        //cout << f;
    }
    
    if (n < 10000000000){
        g = n / 1000 % 10;
        //cout << g;
    }

    if (n < 10000000000){
        h = n / 100 % 10;
        //cout << h;
    }

    if (n < 10000000000){
        y = n / 10 % 10;
        //cout << y;
    }

    if (n < 10000000000){
        z = n % 10;
        //cout << z;
    }

    num = a + b + c + d + e + f + g + h + y + z;
    cout << "num = " << num << endl;

    return 0;
}