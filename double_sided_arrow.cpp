#include <iostream>
using namespace std;
void doubleSidedArrow (int n)
{
   int row = 1;
   // no of values.
   int nst = 1;

   // nsp is the no of spaces...
   int numofspace1 = n-1;
   int numofspace2 = -1;
   int value1 = row;
   int value2 = 1;


   while (row<=n)
   {
    // here spaces are printed 
    // csp is the count of spaces
    int csp1 = 1;
    while (csp1<=numofspace1)
    {
        cout<<" "<<" ";
        csp1 = csp1+1;
    }

    // now values are printed
    // cst is the count 
    int cst1 = 1;
    while (cst1<=nst)
    {
        cout<<value1<<" ";
        value1 = value1 -1;
        cst1 = cst1+1;

    }

    // again space have to be printed...

    int csp2 = 1;
    while (csp2 <=numofspace2)
    {
        cout<<" "<<" ";
        csp2 = csp2 +1;
    }

    // again values have to be printed...

    if (row != 1 && row != n)
    {
        int cst2 =1;
        while (cst2 <=nst)
        {
            cout<<value2 << " ";
            value2 = value2 +1;
            cst2 = cst2 +1;

        }
        
    }

    cout<<endl;

    // move to the next row.......

    if (row <= n/2)
    {
        nst = nst+1;
        numofspace1 = numofspace1 -2;
        numofspace2 = numofspace2 +2;
        value1 = row +1;
        value2 =1;
    }

    else 
    {
        nst =nst -1;
        numofspace1 = numofspace1 +2;
        numofspace2 = numofspace2 -2;
        value1 = n-row;
        value2 = 1;
    }

    row = row + 1;
   }


}
int main()
{
    int n;
    cin>>n;
    doubleSidedArrow(n);

    return 0;
}