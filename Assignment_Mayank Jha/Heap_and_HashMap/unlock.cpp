#include <iostream>
#include<algorithm>
using namespace std;

class unlock
{
private:
    /* data */
public:

int unlockk(int arr1[], int n, int k)
{
    for (int i=0; i<n-1; i++)
    {
        if (k>0)
        {
            int max = i;
            for (int j=i+1; j<n; j++)
            if (arr1[j]>arr1[max])
            max=j;

            if (max!=i)
            {
                swap(arr1[max], arr1[i]);
                k--;
            }
        //     {
        //     if (arr1[j]>arr1[max])
        //     max=j;

        //     if (max!=i)
        //     {
        //         swap(arr1[max], arr1[i]);
        //     }

        //     k--;
        //     }

        }
        else
        break;
    }    
}
    
};

int main()
{
    int n;
    int k;
    cin>>n>>k;
    int arr1[n]={};
    for (int i=0; i<n; i++)
    {
        cin>>arr1[i];
    }

    unlock lk;
    lk.unlockk(arr1, n, k);
    for (int i=0; i<n; i++)
    {
        cout<<arr1[i]<<" ";
    }

    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;
// void KswapPermutation(
// 	int arr[], int n, int k)
// {
// 	for(int i=0;i<n-1;i++)
// 	{
// 		if( k>0)
// 		{
// 			int max = i;
// 			for(int j=i+1;j<n;j++)
// 			if(arr[j]>arr[max])
// 			max = j;
		
// 		// this condition checks whether the max value has changed since when
// 		// we started , or is it the same.
// 		// We need to ignore the swap if the value is same.
// 		// It means that the number ought to be present at the ith position , is already
// 		// there.
// 			if(max!=i)
// 			{
// 			int temp = arr[max];
// 			arr[max] = arr[i];
// 			arr[i] = temp;
// 			k--;
// 			}
// 		}
// 		else
// 		break;
// 	}
// }

// // Driver code
// int main()
// {
// 	int arr[] = { 3, 4, 1, 2, 5 };
// 	int n = sizeof(arr) / sizeof(arr[0]);
// 	int k = 2;
// 	KswapPermutation(arr, n, k);
// 	cout << "Largest permutation after "
// 		<< k << " swaps:"<<endl;
// 	for (int i = 0; i < n; ++i)
// 		cout<<arr[i]<<" ";
// 	return 0;
// }
