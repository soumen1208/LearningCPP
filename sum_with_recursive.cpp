#include <iostream>
using namespace std;

int sum (int arr[], int currentIdx, int n )
{

    // base condition.......
    if (currentIdx==n)
    return 0;

    int ans = arr[currentIdx] + sum(arr,currentIdx + 1,n);
    return ans; 
    
}


int main()
{
    int arr[]={1,2,3,4,5};
    int n = 5;

    int ans = sum(arr, 0, n);

    cout<<ans;
}