#include <iostream>
#include <iomanip>

using namespace std;

const int ROW = 9;
const int COL = 9;

void fill (int d[ROW][COL])
{
    for (int r = 0; r < ROW; r++)
    {
        for (int c = 0; c < COL; c++)
        {
            d[r][c] = r;
        }
    }
}

void swap (int a[ROW][COL], int r1, int r2)
{
    for(int i=0; i<9; i++){
        int chan = a[r1][i];
        a[r1][i] = a[r2][i];
        a[r2][i] = chan;
    }
}

void dump (int a[ROW][COL])
{
    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            cout << setw(4) << a[i][j];
        }
        cout << endl;
    }
}

int main()
{
    int a[ROW][COL];
    int r1;
    int r2;

    cin >> r1;
    cin >> r2;

    
    r1 = (r1 < 0) ? 0 : (r1 >= ROW) ? ROW - 1 : r1;

    r2 = (r2 < 0) ? 0 : (r2 >= ROW) ? ROW - 1 : r2;
    
    fill(a);
    swap(a, r1, r2);
    dump(a);

    return 0;
} 