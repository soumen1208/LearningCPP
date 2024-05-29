#include <iostream>
using namespace std;

void selfless_productofArray (int arr[], int n)
{
    // base function ...........
    if (n==1)
    {
        cout<<0;
        return;
    }
    /*
       allocate memory for the temporary left[] and right[]; 
    */

    int* left = new int [sizeof(int) * n];
    int * right = new int [sizeof(int)* n];
    /*
       Allocate memory for the product array.
    */
    int* product = new int [sizeof(int) * n];

    left[0] = 1;
    right[n-1] = 1;

// input the nos .....
    for (int i=0; i<n; i++)
    cin>>arr[i];

// construct the left array........
    for (int i=1; i<n; i++)
    left[i] = arr[i-1] * left[i-1];

// construct the right array........
    for (int j=n-2; j>=0; j--)
    right[j] = arr[j+1] * right[j+1];
    
// construct the product array.......
    for (int i = 0; i<n; i++)
    product[i] = left[i] * right[i];
    
    
    for (int i=0; i<n; i++)
    cout<<product[i]<<" ";

    return;
}
int main()
{
    int n; 
    cin>>n;
    int arr[n] = {};
    //int n = sizeof(arr)/sizeof(arr[0]);
    
    selfless_productofArray(arr, n);
}