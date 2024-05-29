#include<iostream>
using namespace std;

int count =0;
void mazePath(int sr, int sc, int dr, int dc, string psf)
{
    if(sr == dr && sc == dc)
    {
        cout<<psf<<" ";
        count++;
        return;
    }
     // for vertically
    for (int i=1; i<dr; i++)
    {
        if(sr + i <=dr)
        mazePath(sr + i, sc, dr, dc, psf + 'v');
    }
    // for horizontally
    for (int i=1; i<dc; i++)
    {
        if(sc + i <=dc)
        mazePath(sr, sc + i, dr, dc, psf + 'h');

    }
   
    // for diagonal
    for (int i=1; i<dc && i<dr; i++)
    {
        if(sc + i <=dc && sr + i <= dr)
        mazePath(sr + i, sc + i, dr, dc, psf + 'd');
    }

    // int count = 0;
    // for(int i=0; psf[i] !='\0'; i++ )
    // {
    //     count++;
    // }
    // cout<<count;
    
}
int main()
{
    int n, m;
    cin>>n>>m;
    mazePath(0, 0, n-1,m-1,"");
    cout<<"\n"<<count;

}