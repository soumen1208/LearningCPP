#include <iostream>
using namespace std;
int main()
{
    int arr[3][3] ={{1,2,3}, {4,5,6}, {7,8,9}};
    
    // rows of the 2d arrys i.e i is fixed for this
    for (int i=0; i < 3; i++)
    {
        //  col of the 2d arrys i.e j is fixed for this
        for (int j = 0; j < 3; j++)
        {
            // cout<<i<<j<<" "<<endl;

            cout<<arr[i][j]<<" ";
 
        }

        cout<<endl;

    } 
}