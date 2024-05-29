#include <iostream>
using namespace std;

/*
    1 2 3
    4 5 6 ------->> 1 2 3 6 9 8 7 4 5
    7 8 9

    1. strow 
    2. encol
    3. enrow
    4. stcol
*/
int spiralSquare (int arr[][3], int n)
{
    int stRow = 0, enRow = n-1, stCol = 0, enCol = n-1;
    
    while( stRow<=enRow && stCol <= enCol)
    {
        // print stRow ....
        for (int i=stCol; i<=enCol; i++)
        cout<<arr[stRow][i]<<" ";
        stRow++;

        cout<<endl;

        // print encol.....
        for (int i =stRow; i<=enRow; i++)
        cout<<arr[i][enCol]<<" ";
        enCol--;


        // print enrow....
        for (int i=enCol; i>=stCol; i--)
        cout<<arr[enRow][i]<<" ";
        enRow--;

        // print stcol.....
        for (int i=enRow; i>=stRow; i--)
        cout<<arr[i][stCol]<<" ";
        stCol++; 
    }


}
int main()
{
    int arr[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    int n=3;

    spiralSquare(arr,n);
}