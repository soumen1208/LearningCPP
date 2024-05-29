#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;

bool monotonic_array (int arr[], int n)
{

    // 1st check decreasing order sequence......... 
    if (is_sorted(arr, arr+n, greater<int>()))
    return true;

    // 2nd check increasing order sequencing........
    if (is_sorted(arr, arr+n))
    return true;

    return false;

}
int main()
{
    int arr[] = {1,2,3,4};
    int n= sizeof(arr)/sizeof(arr[0]);

    if (monotonic_array(arr, n))
    cout<<"true";
    else
    cout<<"false";

}