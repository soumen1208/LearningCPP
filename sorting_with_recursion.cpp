#include <iostream>
using namespace std;

bool isSorted(int arr[], int currIdx, int n)
{

    if (currIdx== n)
    return true;

    if (arr [currIdx] > arr[currIdx+1])
    return false;

    return isSorted (arr, currIdx+1, n);
    
}
int main() 
{
    //int n;
    //cin>>n;
    int arr []={1,2,3,4,5};
    int n = 5;

    if(isSorted(arr, 0, n))
    cout<<"true";
    else 
    cout<<"false";
}

// other method..........


// #include <iostream>
// using namespace std;
 
// // Function that returns true if array is
// // sorted in non-decreasing order.
// bool arraySortedOrNot(int a[], int n)
// {
     
//     // Base case
//     if (n == 1 || n == 0)
//     {
//         return true;
//     }
     
//     // Check if present index and index
//     // previous to it are in correct order
//     // and rest of the array is also sorted
//     // if true then return true else return
//     // false
//     return a[n - 1] >= a[n - 2] &&
//      arraySortedOrNot(a, n - 1);
// }
 
// // Driver code
// int main()
// {
//     int n;
//     cin>>n;
//     int arr[n] = {};
//     cin>>arr[n];
     
//     // Function Call
//     if (arraySortedOrNot(arr, n))
//     {
//         cout << "Yes" << endl;
//     }
//     else
//     {
//         cout << "No" << endl;
//     }
     
//     return 0;
// }