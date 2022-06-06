#include <iostream>
#include <iomanip>

using namespace std;

const int ROW = 9;
const int COL = 9;

void fill (int a[ROW][COL], int row, int col)
{
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            a[i][j] = (i + 1) * (j + 1);
        }
    }
}

void dump (int a[ROW][COL], int row, int col)
{
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout << setw(4) << a[i][j];
        }
        cout << endl;
    }
}

int main(){
    int a[ROW][COL];
    int row, col;

    cin >> row; 
    cin >> col;
    
    
    row = (row < 1) ? 1 : row = (row > 9) ? 9 : row;
    
    col = (col < 1) ? 1 : col = (col > 9) ? 9 : col;

    fill(a, row, col);
    dump(a, row, col);

    return 0;
} 