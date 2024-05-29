// #include <bits/stdc++.h> 
// using namespace std; 
 
// int minSwaps_Sekhar(int arr[], int n) 
// { 
// 	pair<int, int> arrPosition[n]; 
// 	for (int i = 0; i < n; i++) { 
// 		arrPosition[i].first = arr[i]; 
// 		arrPosition[i].second = i; 
// 	} 
    
//     sort(arrPosition, arrPosition + n); 

// 	vector<bool> v(n, false); 

// 	int ans = 0; 

// 	for (int i = 0; i < n; i++) { 
// 		if (v[i] || arrPosition[i].second == i) 
// 			continue; 
      
//       	int size = 0; 
// 		int j = i; 
// 		while (!v[j]) { 
// 			v[j] = 1; 
// 			j = arrPosition[j].second; 
// 			size++; 
// 		} 

// 		ans += (size - 1); 
// 	} 

// 	return ans; 
// } 


// int minSwapForArraySm( 
// 	int a[], int b[], int n) 
// { 
	
// 	map<int, int> m; 
// 	for (int i = 0; i < n; i++) 
// 		m[b[i]] = i; 


// 	for (int i = 0; i < n; i++) 
// 		b[i] = m[a[i]]; 

	 
// 	return minSwaps_Sekhar(b, n); 
// } 


// void Kswap_Permutation( 
// 	int arr[], int n, int k) 
// { 
// 	int a[n]; 

// 	for (int i = 0; i < n; i++) 
// 		a[i] = arr[i]; 

// 	sort(arr, arr + n, greater<int>()); 

// 	do { 
//         int a1[n], b1[n]; 
// 		for (int i = 0; i < n; i++) { 
// 			a1[i] = arr[i]; 
// 			b1[i] = a[i]; 
// 		} 
 
// 		if (minSwapForArraySm(a1, b1, n) <= k) { 
// 			for (int i = 0; i < n; i++) 
// 				cout << arr[i] << " "; 
// 			break; 
// 		} 

// 	} while (prev_permutation(arr, arr + n)); 
// } 

// int main() 
// { 
// 	int n, k;
//     cin>>n>>k;  
// 	int arr[n] = {};
//     for (int i=0; i<n; i++){
//         cin>>arr[i];
//     } 
 
// 	Kswap_Permutation(arr, n, k); 
// 	return 0; 
// } 





// // ============================================================================================================


// // #include <bits/stdc++.h> 
// // using namespace std; 

// // // Function returns the minimum number 
// // // of swaps required to sort the array 
// // // This method is taken from below post 
// // // https:// www.geeksforgeeks.org/ 
// // // minimum-number-swaps-required-sort-array/ 
// // int minSwapsToSort(int arr[], int n) 
// // { 
// // 	// Create an array of pairs where first 
// // 	// element is array element and second 
// // 	// element is position of first element 
// // 	pair<int, int> arrPos[n]; 
// // 	for (int i = 0; i < n; i++) { 
// // 		arrPos[i].first = arr[i]; 
// // 		arrPos[i].second = i; 
// // 	} 

// // 	// Sort the array by array element 
// // 	// values to get right position of 
// // 	// every element as second 
// // 	// element of pair. 
// // 	sort(arrPos, arrPos + n); 

// // 	// To keep track of visited elements. 
// // 	// Initialize all elements as not 
// // 	// visited or false. 
// // 	vector<bool> vis(n, false); 

// // 	// Initialize result 
// // 	int ans = 0; 

// // 	// Traverse array elements 
// // 	for (int i = 0; i < n; i++) { 
// // 		// Already swapped and corrected or 
// // 		// already present at correct pos 
// // 		if (vis[i] || arrPos[i].second == i) 
// // 			continue; 

// // 		// Find out the number of node in 
// // 		// this cycle and add in ans 
// // 		int cycle_size = 0; 
// // 		int j = i; 
// // 		while (!vis[j]) { 
// // 			vis[j] = 1; 

// // 			// move to next node 
// // 			j = arrPos[j].second; 
// // 			cycle_size++; 
// // 		} 

// // 		// Update answer by adding current 
// // 		// cycle. 
// // 		ans += (cycle_size - 1); 
// // 	} 

// // 	// Return result 
// // 	return ans; 
// // } 

// // // method returns minimum number of 
// // // swap to make array B same as array A 
// // int minSwapToMakeArraySame( 
// // 	int a[], int b[], int n) 
// // { 
// // 	// Map to store position of elements 
// // 	// in array B we basically store 
// // 	// element to index mapping. 
// // 	map<int, int> mp; 
// // 	for (int i = 0; i < n; i++) 
// // 		mp[b[i]] = i; 

// // 	// now we're storing position of array 
// // 	// A elements in array B. 
// // 	for (int i = 0; i < n; i++) 
// // 		b[i] = mp[a[i]]; 

// // 	/* We can uncomment this section to 
// // 	print modified b array 
// // 	for (int i = 0; i < N; i++) 
// // 		cout << b[i] << " "; 
// // 	cout << endl; */

// // 	// Returning minimum swap for sorting 
// // 	// in modified array B as final answer 
// // 	return minSwapsToSort(b, n); 
// // } 

// // // Function to calculate largest 
// // // permutation after atmost K swaps 
// // void KswapPermutation( 
// // 	int arr[], int n, int k) 
// // { 
// // 	int a[n]; 

// // 	// copy the array 
// // 	for (int i = 0; i < n; i++) 
// // 		a[i] = arr[i]; 

// // 	// Sort the array in descending order 
// // 	sort(arr, arr + n, greater<int>()); 

// // 	// generate permutation in lexicographically 
// // 	// decreasing order. 
// // 	do { 
// // 		// copy the array 
// // 		int a1[n], b1[n]; 
// // 		for (int i = 0; i < n; i++) { 
// // 			a1[i] = arr[i]; 
// // 			b1[i] = a[i]; 
// // 		} 

// // 		// Check if it can be made same in k steps 
// // 		if ( 
// // 			minSwapToMakeArraySame( 
// // 				a1, b1, n) 
// // 			<= k) { 
// // 			// Print the array 
// // 			for (int i = 0; i < n; i++) 
// // 				cout << arr[i] << " "; 
// // 			break; 
// // 		} 

// // 		// move to previous permutation 
// // 	} while (prev_permutation(arr, arr + n)); 
// // } 

// // int main() 
// // { 
// // 	int arr[] = { 3, 4, 1, 2, 5 }; 
// // 	int n = sizeof(arr) / sizeof(arr[0]); 
// // 	int k = 2; 

// // 	cout << "Largest permutation after "
// // 		<< k << " swaps:\n"; 

// // 	KswapPermutation(arr, n, k); 
// // 	return 0; 
// // } 
// // // This code is contributed by karandeep1234


#include <bits/stdc++.h> 
using namespace std; 
void Kswap_Permutation( 
	int arr[], int n, int k) 
{ 
	for(int i=0;i<n-1;i++) 
	{ 
		if( k>0) 
		{ 
			int max = i; 
			for(int j=i+1;j<n;j++) 
			if(arr[j]>arr[max]) 
			max = j; 
			
		// this condition checks whether the max value has changed since when 
		// we started , or is it the same. 
		// We need to ignore the swap if the value is same. 
		// It means that the number ought to be present at the ith position , is already 
		// there. 
			// if(max!=i) 
			// { 
			// int temp = arr[max]; 
			// arr[max] = arr[i]; 
			// arr[i] = temp; 
			// k--; 
			// } 
            swap(max, arr[i-1]);
		} 
		else
		break; 
	} 
} 

// Driver code 
int main() 
{ 
	int n, k; 
    cin>>n>>k; 
	int arr[n] = {};
    for(int i=0;i<n;i++){
        cin>>arr[i];
    } 
	Kswap_Permutation(arr, n, k); 
	for (int i = 0; i < n; ++i) 
		cout<<arr[i]<<" "; 
	return 0; 
}
