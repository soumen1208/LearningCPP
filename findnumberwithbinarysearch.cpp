#include <iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    int s=0, e=n-1, mid;

    int target =2;

    while (s<=e)
    {
        mid = (s+e)/2;

        if (arr[mid]== target){
            cout<<"target is found "<<mid<<" position";
            break;
        }
        else if(arr[mid]>target)
        e=mid-1;
        else
        s=mid+1;
        
    }

}