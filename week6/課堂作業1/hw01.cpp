#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

string toLG(int g)
{
    if (g >= 90) return "A+";
    if (g >= 85) return "A";
    if (g >= 80) return "A-";
    if (g >= 77) return "B+";
    if (g >= 73) return "B";
    if (g >= 70) return "B-";
    if (g >= 67) return "C+";
    if (g >= 63) return "C";
    if (g >= 60) return "C-";
    if (g >= 50) return "D";
    if (g >= 1)  return "E";
    return "X";
}

int main()
{
    int g;
    int col = -1;

    while (cin >> g)
    {
        

        if (col < 0)
        {
            col = g - 1;
            cout << endl;
        }
        else
        {
            cout << left << setw(5) << toLG(g) ;
            col--;
        }
    }

    return 0;
}