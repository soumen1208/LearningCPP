// CPP program for the above approach
#include <bits/stdc++.h>
using namespace std;

/* For a given array arr[],
returns the maximum j – i such
that arr[j] > arr[i] */
int maxIndexDiff(int arr[], int n)
{
	int maxDiff = -1;
	int i, j;

	for (i = 0; i < n; ++i) {
		for (j = n - 1; j > i; --j) {
			if (arr[j] >= arr[i] && maxDiff < (j - i))
				maxDiff = j - i;
		}
	}

	return maxDiff;
}

int main()
{
	// int arr[] = { 6, 0, 8, 2, 1, 5 };
	// int n = sizeof(arr) / sizeof(arr[0]);
    int n;cin>>n;
    int arr[n]={};
    for (int i=0; i<n; i++)
    {
        cin>>arr[i];
    }    
	int maxDiff = maxIndexDiff(arr, n);
	cout<< maxDiff; 
	return 0;
}

// This code is contributed
// by Akanksha Rai(Abby_akku)
