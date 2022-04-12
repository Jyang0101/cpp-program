#include <iostream>
#include <iomanip>
#include <algorithm>

using namespace std;

int main()
{
    int a,b,c,d,e;

    cout << endl;
    cout << "Enter five numbers : ";
    cin >> a >> b >> c >> d >> e;
    int i; 
    int max = a;
    int min = a;
    int arr[] = {a , b , c , d , e };
    sort(arr, arr+5);

    cout << endl;
    // cout << "sort array by default (increasing) : " ;

    for (int i = 0; i < 5; i++)
    {
        cout << setw(4) << arr[i] ;

        if(b > max){
        max = b;}
        else if (b < min){
        min = b;}

        if(c > max){
        max = c;}
        else if (c < min){
        min = c;}

        if(d > max){
        max = d;}
        else if (d < min){
        min = d;}

        if(e > max){
        max = e;}
        else if (e < min){
        min = e;}
    }

cout << endl;
// cout << "max = " << max << endl;
// cout << "min = " << min << endl;
cout << "mid = " << arr[2] << endl;




return 0;

}