#include <iostream>
using namespace std;
bool pathPossible (int maze[][4], int rowNo, int colNo, int n)
{
    // base condition ...
    if (maze[n-1][n-1] == 0) // when last cell (n-1, n-1) is zero then return false. 
    return false;

    if (rowNo == n-1 && colNo == n-1) // when last cell (n-1, n-1) is one then return true.....
    return true;

    if(rowNo>=n || colNo>=n) // when rowNo is greater than nth nos means when path is out of bound then return false...
    return false;

    if (maze[rowNo][colNo] == 0)
    return false;

    // start recursive function.........

    bool op1 = pathPossible(maze, rowNo+1, colNo, n);
    if (op1 == true)
    return true;

    else
    pathPossible (maze, rowNo, colNo+1, n); 

}
int main()
{
    int path [][4] = {{1,1,0,0},
                      {1,1,1,1},
                      {1,0,0,1},
                      {1,1,0,1}};

   int n =4;

   if (pathPossible (path, 0, 0, n))
   cout<<"Yes path is possible.";

   else
   cout<<"Path is not possible.";

}