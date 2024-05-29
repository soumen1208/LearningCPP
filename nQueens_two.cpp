#include <iostream>
using namespace std;

bool isSafe (int board[][4], int rowNo, int colNo, int n)
{
    // check the safety of the current col...
    for (int i = rowNo-1; i>=0; i--)
    {
        if (board[i][colNo] == 1)
        return false;
    }

    // check the safety of the left diagonal .....

    int i=rowNo -1;
    int j = colNo-1;

    while (i>=0 && j>=0)
    {
        if (board[i][j] == 1)
        return false;

        i--;
        j--;
    }

    // check the safety of the right diagoanal.....

    i=rowNo-1;
    j=colNo+1;


    while ( i>=0 && j<n)
    {
        if (board[i][j] ==1)
        return false;

        i--;
        j++;
    }
    
    return true;
    
}

void printBoard (int board[][4], int n)
{
    for (int i=0; i<n; i++)
    {
        for (int j =0; j<n; j++)
        {
            cout<<board[i][j];
        }

        cout<<"\n";
    }
}

bool nQueens (int board[][4], int currRow, int n)
{
    if (currRow == n)
    {
        printBoard(board,n);
        cout<<"\n";
        return false;
    }

    // to go to every cell safe??
    for (int i=0; i<n; i++)
    {
        // is my current cell safe ??

        if(isSafe(board, currRow, i, n))
        {
            /*
           to bw continue..
           rowNo = currRow;
           colNo = i;

           placing the queen at the current cell......
        */

       board [currRow][i] =1;

       // time machine -> lets check the future can I place...
       // remaining queens or not?

       bool canPlaceRemainingsQueenss = nQueens(board, currRow+1, n);

       if (canPlaceRemainingsQueenss)
       return true;


       board [currRow][i] = 0;
        }
    }

    return false;
}
int main()
{
    int board [4][4] = {0};
    int n =4;

    /*
       if 
    */

   (nQueens(board,0,n)) ? cout<<"yes we can place n queens\n" : cout<<"no cant place n queens";

}