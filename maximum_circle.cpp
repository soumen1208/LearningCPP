#include<iostream>
#include<algorithm>
using namespace std;

struct maximum_circle
{
    /* data */
    int start, end;
};

bool compare (maximum_circle a, maximum_circle b)
{
    if (a.end == b.end)
    
    return a.start < b.start;
    return a.end < b.end;
     
}

void circles (int c[], int r[], int n)
{

    maximum_circle dia[n];
    
    for (int i=0; i<n; ++i)
    {
        dia[i].start = c[i] - r[i];
        dia[i].end = c[i] + r[i];
    }

    sort(dia, dia+n, compare);

    int count =0;
    int curr = dia[0].end;

    for (int i=1; i<n; ++i)
    {
        if (dia[i].start > curr )
        {
            curr = dia[i].end;
        }else{
            count++;
        }
    }

    cout<<count<<"\n";
}

int main()
{
    int n;
    cin>>n;
    int c[] = {1,2,3,4};
     for (int i=0; i<n; i++)
    {
        cin>>c[i];
    }

    int r[] = {1,1,1,1};

    
    for (int i=0; i<n; i++)
    {
        cin>>r[i];
    }
    
    //int n = sizeof(c)/sizeof(int);

    circles(c, r, n);
    return 0;

}