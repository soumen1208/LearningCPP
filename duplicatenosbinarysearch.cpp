#include <iostream>
using namespace std;
int main()
{
    int arr2[] = {1,2,3,3,3,4,5,6,7,8,9};
    int n = sizeof(arr2)/sizeof(arr2[0]);

    int target = 3;

    int s=0, e=n-1, mid;

    while (s<=e)
    {
        mid = (s+e)/2;

        if (arr2[mid]==target && arr2[mid-1] != target)
        {
            cout<<"first occrance at index "<<mid;
            break;
        }

        else if(arr2[mid]>target)
        e=mid-1;
        else if(arr2[mid]<target)
        s=mid+1;
        else if (arr2[mid]==target)
        e=mid-1;
        
    } 

    /*.........................................last occurance..............................................
    .......................................................................................................*/

//     int arr2[] = {1,2,3,3,3,4,5,6,7,8,9};
//     int n = sizeof(arr2)/sizeof(arr2[0]);

//     int target = 3;

//     int s=0, e=n-1, mid;

//     while (s<=e)
//     {
//         mid = (s+e)/2;

//         if (arr2[mid]==target && arr2[mid-1] != target)
//         {
//             cout<<"first occrance at index "<<mid;
//             break;
//         }

//         else if(arr2[mid]>target)
//         e=mid-1;
//         else if(arr2[mid]<target)
//         s=mid+1;
//         else if (arr2[mid]==target)
//         e=mid-1;
        
//     } 

 }