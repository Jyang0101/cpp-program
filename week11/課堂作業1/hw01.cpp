#include <iostream>
#include <iomanip>

using namespace std;



void printAll(int n)
{

        cout << "All    : ";
        for (int i = 1; i <= n; i++)
            cout << setw(4) << i;

}

void printEven(int n)
{

        cout << "Even    : ";
        for (int i = 1; i <= n; i++)
            if (i % 2 == 0)
                cout << setw(4) << i;

}


void printOdd(int n)
{

        cout << "Odd    : ";
        for (int i = 1; i <= n; i++)
            if (i % 2 != 0)
                cout << setw(4) << i;

}

void printDiv4(int n)
{

        cout << "Div. 4    : ";
        for (int i = 1; i <= n; i++)
            if (i % 4 == 0)
                cout << setw(4) << i;

}

int main()
{
    int op, n;
    
    cin >> op;
    cin >> n;

    switch (op)
    {
    case 0:
        printAll(n);
        break;
    
    case 1:
        printEven(n);
        break;
    
    case 2:
        printOdd(n);
        break;

    case 3:
        printDiv4(n);
        break;
    }

    return 0;
}