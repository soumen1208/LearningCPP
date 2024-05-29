#include<iostream>
using namespace std;

bool Non_decreasingArray (int arr[], int n)
{

    for (int i=0; i<n; i++)
    cin>>arr[i];
    // take the first element........
    int curEle = arr[0];

    // perform the operation .........
    curEle--;

    // traverse the array.......

    for (int i=1; i<n; i++)
{
    int nxt = arr[i];
    /*
      if next element is greater than the current element then decrease .....
      and it to highly increase the posibilities............I
    */

   if (nxt<curEle)
    nxt--;

    // It is not possible to make the
    // array non-decreasing with
    // the given operation

    else if (curEle<nxt)
    return true;

    curEle = nxt;

}

return false;
}

int main()
{
    int n;
    cin>>n;

    int arr[n] = {};

    if (Non_decreasingArray(arr, n))
    cout<<"YES";

    else
    cout<<"NO";
}


// // C++ implementation of the approach
// #include <bits/stdc++.h>
// using namespace std;

// // Function to make array non-decreasing
// bool isPossible(int a[], int n)
// {
// 	// Take the first element
// 	int cur = a[0];

// 	// Perform the operation
// 	cur--;

// 	// Traverse the array
// 	for (int i = 1; i < n; i++) {

// 		// Next element
// 		int nxt = a[i];

// 		// If next element is greater than the
// 		// current element then decrease
// 		// it to increase the possibilities
// 		if (nxt < cur)
// 			nxt--;

// 		// It is not possible to make the
// 		// array non-decreasing with
// 		// the given operation
// 		else if (nxt > cur)
// 			return true;

// 		// Next element is now the current
// 		cur = nxt;
// 	}

// 	// The array can be made non-decreasing
// 	// with the given operation
// 	return true;
// }

// // Driver code
// int main()
// {
// 	int a[] = { 4,2,5};
// 	int n = sizeof(a) / sizeof(a[0]);

// 	if (isPossible(a, n))
// 		cout << "Yes";
// 	else
// 		cout << "No";

// 	return 0;
// }
