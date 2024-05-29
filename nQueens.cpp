#include <iostream>
using namespace std;

bool isSafe (int board[][4], int rowNo, int colNo)
{
    // check the safety of the current row.....

    for (int i = rowNo -1; i>=0; i--)
    {
        if (board[i][colNo] == 1)
        return false;
    }

    // check the safety of the left diagonal.....

    int i = rowNo-1;
    int j = colNo -1;

    while (i>=0 && j>=0)
    {
        if (board[i][j] == 1)
        return false;
        
        i--;
        j--;
    }

    // check the safety of the right diagonal....
    
    int i = rowNo-1;
    int j = colNo+1;

    while (i>=0 && j<=3)
    {
        if (board[i][j] == 1)
        return false;

        i--;
        j++; 
    }
    
    
}

bool nQueens (int board [][4],int nQueen [][4], int currRow, int n)
{
    // base condition.
    if (currRow == n)
    return true;
    
    // to go to every cell in my currRow....
    for (int i=0; i<n; i++)
    {
        if (isSafe(board, currRow, i, n))

        // row = currentRow...
        // colNo = i;
        // placing the queen at the current cell....

        board[currRow][i] = 1;

        bool canplaceRemainings = nQueens(board, nQueen, currRow+1, n);
        if (canplaceRemainings)
        return true;

        board [currRow][i] = 0;

    }


    return false;
}
int main()
{
    int board [4][4] = {0};
    int n =4;

    if(nQueens(board, 0, n));

}