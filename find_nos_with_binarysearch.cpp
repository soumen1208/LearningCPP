#include <iostream>
using namespace std;

/*
       1  2  3  4
       5  6  7  8   --- >> find 11 of this 2d array.........
       9  10 11 12
*/
bool search (int arr[][4], int target, int n, int m)
{
   for (int i=0; i<=n; i++)
   {
    if (target >= arr[i][0] && target<=arr[i][n-1])
    {
        int s=0, e=m-1, mid;

        while(s<=e) 
        {
            mid=(s+e)/2;
            if (target==arr[i][mid])
            {
                return true;
            }else if(target > arr [i][mid])
            {
                s=mid+1;
            }else{
                e=mid-1;
            }

        }
    }
   }

   return false;
}
int main()
{
    int arr[][4] = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}};

    int target = 12;

    if (search(arr, target , 3,4))
    cout<<"element found";
    else 
    cout<<"element not found";

}