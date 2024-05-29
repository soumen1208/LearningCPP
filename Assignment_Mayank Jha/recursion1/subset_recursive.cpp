#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void printAllSubsetsRec(int arr[], int n, vector<int> v,
                        int sum)
{
    // If remaining sum is 0, then print all
    // elements of current subset.
    if (sum == 0) {
        for (auto x : v)
            cout << x << " ";
        // cout << endl;
        cout<<"  ";
        return;
    }
 
    // If no remaining elements,
    if (n == 0)
        return;
 
    // We consider two cases for every element.
    // a) We do not include last element.
    // b) We include last element in current subset.
    printAllSubsetsRec(arr, n - 1, v, sum);
    v.push_back(arr[n - 1]);
    printAllSubsetsRec(arr, n - 1, v, sum - arr[n - 1]);
}
 
// Wrapper over printAllSubsetsRec()
void printAllSubsets(int arr[], int n, int sum)
{
    vector<int> v;
    printAllSubsetsRec(arr, n, v, sum);
}

// Recursive function to return the count
// of subsets with sum equal to the given value
int subsetSum(int arr[], int n, int i,
			int sum, int count)
{
	// The recursion is stopped at N-th level
	// where all the subsets of the given array
	// have been checked
	if (i == n) {

		// Incrementing the count if sum is
		// equal to 0 and returning the count
		if (sum == 0) {
			count++;
		}
		return count;
	}

	// Recursively calling the function for two cases
	// Either the element can be counted in the subset
	// If the element is counted, then the remaining sum
	// to be checked is sum - the selected element
	// If the element is not included, then the remaining sum
	// to be checked is the total sum
	count = subsetSum(arr, n, i + 1, sum - arr[i], count);
	count = subsetSum(arr, n, i + 1, sum, count);
	return count;
}



// Driver code
int main()
{
    int n;
    cin>>n;
    int arr[n]={};
    for (int i=0; i<n;i++)
    {
        cin>>arr[i];
    }
    int sum;
    cin>>sum;
	// int arr[] = { 1, 2, 3 };
	// int sum = 3;
	// int n = sizeof(arr) / sizeof(arr[0]);

    printAllSubsets(arr, n, sum);
	cout <<endl<< subsetSum(arr, n, 0, sum, 0);
}
