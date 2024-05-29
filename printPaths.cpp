#include <iostream>
using namespace std;

void printMatrix(int mat[][4], int n)
{
    for (int i = 0; i<n; i++)
    {
        for (int j = 0; j<n; j++)
        {
            cout<<mat[i][j];
        }
        cout<<"\n";
    }
    cout<<"\n\n";
    
}
void printPaths (int maze [][4], int paths[][4], int n, int rowno, int colNo)
{
    // base condition........
    if (maze[n-1][n-1] == 0)
    return;

    if (rowno>=n || colNo>=n)
    return;

    if (maze[rowno][colNo] == 0)
    return;

    if (rowno == n-1 && colNo == n-1)
    {
        paths[rowno][colNo] = 1;
        printMatrix(paths,n);
        paths[rowno][colNo] = 0;
        return;
    }

    // recursive function start......

    paths[rowno][colNo] = 1;
    printPaths (maze, paths, n, rowno+1, colNo);
    printPaths (maze, paths, n, rowno, colNo+1);
    paths [rowno][colNo] = 0;
}
int main()
{
    int maze [][4] = {{1,1,1,1},
                      {1,0,1,1},
                      {1,1,0,1},
                      {1,1,1,1}};

    int paths [4][4] = {0};

    int n = 4;

    printPaths(maze, paths, n, 0, 0);

}