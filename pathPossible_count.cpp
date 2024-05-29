#include <iostream>
using namespace std;

int cnt = 0; // global variable......

void count_pathPossible (int maze[][4], int rowNo, int colNo, int n)
{

    if (rowNo == n-1 && colNo == n-1)// when last cell (n-1, n-1) is one then return true.....
    {
      cnt++;
      return;
    }

    if(rowNo>=n || colNo>=n) // when rowNo is greater than nth nos means when path is out of bound then return false...
    return;

    if (maze[rowNo][colNo] == 0)
    return;

    count_pathPossible (maze, rowNo+1, colNo, n);

    count_pathPossible (maze, rowNo, colNo+1, n);

}
int main()
{
    int path [][4] = {{1,1,1,1},
                      {1,0,0,1},
                      {1,0,0,1},
                      {1,1,1,1}};

   int n =4;

   count_pathPossible (path, 0, 0, n);
   cout<<cnt;

}