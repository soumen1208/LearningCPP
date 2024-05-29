#include <iostream>
using namespace std;

void  shift_at_end (int* arr , int target, int n , int curIdx)
{
    if (curIdx == n)
    return;

    if (arr[curIdx] == target)
    {
        swap (arr[curIdx],arr[curIdx+1]);
    }
    shift_at_end (arr, target, n, curIdx);
    
}
int main()
{
    int arr[] ={1,2,3,4,5,6,7};
    int n = sizeof (arr)/sizeof (arr[0]);

    int target = 3;

    shift_at_end(arr, target, n, 0);

    for (int i=0; i<n; i++)
    cout<<arr[i];

}