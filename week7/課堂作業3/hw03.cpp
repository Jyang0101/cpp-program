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
double che(double num) //
{
	num = num*10;
	int a = num;
	return (double)a/(double)10;
}

int main()
{
    int g;
    int col = -1;
    double save_name_add = 0;
    int save = 0;
    int nl = 0; //
    cin>>nl; //
    int arr[nl]; //
    int i; //
    int k;
    for(i=0;i<nl;i++) //
    {
    	cin>>arr[i]; //
    } 
    int s =0; //
    while (cin >> g)
    {

        if (col < 0)
        {

            save_name_add = 0;
            save = g;
            s=0; //
            col = g - 1;
            k = g;
            cout << endl;
        }
        else
        {
            save_name_add += return_num(g)*arr[save - col-1]; //
            s+=arr[save - col-1]; //
            cout << toLG(g) <<'\t';
            col--;
            if (col < 0) {
                for (int a = k; a < 5; a++) cout << '\t';
                cout << setprecision(2) << che(save_name_add / (s)) << endl; //

            }
        }

    }

    return 0;

}