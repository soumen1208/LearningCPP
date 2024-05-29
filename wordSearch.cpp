#include <iostream>
#include <string.h>
using namespace std;

bool wordSearch(string board[], string word,int pos, int x, int y,int n, int m)
{
    if (x>=n || x<0 || y>=m || y<0)
    return;

    if (pos == word.length() -1 && board[x][y] == word[word.length()-1])
    return true;

    if (board[x][y] != word[pos])
    return false;

    char ch = board[x][y];
    board[x][y] ='#';

    



}

int main()
{
    string board[] ={"ABCE","SFCS","ADEE"};

    int n =3, m=4;

}