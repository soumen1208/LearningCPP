// Simple C++ program to print
// next greater elements in a
// given array
#include <iostream>
using namespace std;

/* prints element and NGE pair
for all elements of arr[] of size n */
void printNxt1(int arr[], int n, int arr1[], int m)
{
	int next, i, j;
	for (i = 0; i < n; i++) {
		next = -1;
		for (j = i + 1; j < n; j++) {
			if (arr[i] < arr[j]) {
				next = arr[j];
				break;
			}
		}
		cout << arr[i] << "," << next << endl;
	}

    int next1, k, l;
	for (k = 0; k < m; k++) {
		next1 = -1;
		for (l = k + 1; l < m; l++) {
			if (arr1[k] < arr1[l]) {
				next1 = arr1[l];
				break;
			}
		}
		// cout << arr[i] << "," << next << endl;
		cout << arr1[k] << "," << next1 << endl;
	}
	
}

// Driver Code
int main()
{
    int arrT;
    cin>>arrT;
	int arr[arrT] = {};
    int arr1[arrT] = {};
    int n;
    cin>>n;
    for (int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int m;
    cin>>m;
    for (int j=0; j<m; j++)
    {
        cin>>arr1[j];
    }

	// int n = sizeof(arr) / sizeof(arr[0]);
	printNxt1(arr, n, arr1, m);
	// printNxt2(arr1, m);
	return 0;
}

// This code is contributed
// by Akanksha Rai(Abby_akku)
