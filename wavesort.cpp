#include <iostream>
using namespace std;
int main()
{
    int arr[] = {5, 10, 4, 3, 1};
    int n=5;

    for (int i=0; i<n; i=i+2)
    {
       if (i>0 && arr[i]<arr[i-1])
       {
        swap(arr[i], arr[i-1]);
       }
       if (i<n-1 && arr[i]<arr[i+1])
       {
        swap (arr[i], arr[i+1]);
       }
    }

    for (int i=0; i<n; i++)
    cout<<arr[i]<<" "; 

}