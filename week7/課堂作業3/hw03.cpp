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
double return_num(int g)
{
    if (g >= 90) return 4.3;
    if (g >= 85) return 4.0;
    if (g >= 80) return 3.7;
    if (g >= 77) return 3.3;
    if (g >= 73) return 3.0;
    if (g >= 70) return 2.7;
    if (g >= 67) return 2.3;
    if (g >= 63) return 2.0;
    if (g >= 60) return 1.7;
    if (g >= 50) return 1.0;
    if (g >= 1)  return 0;
    return 0;
}


int main()
{
    int g;
    int col = -2;
    float gpa = 0;
    int tc = 0;

    cout.precision(2);
    while (cin >> g)
    {
        if (col < 0)
        {
            if (col != -2)
            {
                cout << setw((6 - tc) * 5) << right << gpa / tc << endl;
            }
            tc = g;
            col = g - 1;
            gpa = 0;
        }
        else
        {
            gpa += toGP(g);
            cout << setw(5) << left << toLG(g);
            col--;
        }
    }
    (tc > 0) && cout << setw((6 - tc) * 5) << right << gpa / tc << endl;

    return 0;
}
