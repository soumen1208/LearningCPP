// // CPP program to count the
// // Number of subarrays with
// // m odd numbers
 #include <bits/stdc++.h>
 using namespace std;

// // function that returns
// // the count of subarrays
// // with m odd numbers
// int countSubarrays(int arr[], int n, int m)
// {
// 	int count = 0;

// 	// traverse for all
// 	// possible subarrays
// 	for (int i = 0; i < n; i++)
// 	{
// 		int odd = 0;
// 		for (int j = i; j < n; j++)
// 		{
// 			if (arr[j] % 2)
// 				odd++;

// 			// if count of odd numbers in
// 			// subarray is m
// 			if (odd == m)
// 				count++;
// 		}
// 	}
// 	return count;
// }

// // Driver Code
// int main()
// {
// 	int n,m;
//     cin>>n>>m;
//     int arr[]={};
//     for (int i=0; i<n;i++)
//     {
//         cin>>arr[i];
//     }
// 	cout << countSubarrays(arr, n, m);
// 	return 0;
// }



class Solution {
public:
    int numberOfSubarrays(vector<int>& v, int k) {
 
         unordered_map<int ,int> m;
 
        for(int i=0;i<v.size();++i)
        {
            if(v[i]&1)
                v[i]=1;
 
            else
                v[i]=0;
        }
 
        int sum=0,i,cnt=0;
        for(i=0;i<v.size();++i)
        {
            sum+=v[i];
            if(sum==k)
                cnt++;
 
            if(m.find(sum-k)!=m.end())
                cnt+=m[sum-k];
 
            m[sum]++;
        }
 
        return cnt;
 
 
    }
};
int main()
{
    int n,m;
    cin>>n>>m;
    int a;

    vector<int>v;
    for (int i=0;i<n;i++)
    {
       cin>>a;
       v.push_back(a); 
    }

    Solution sl;
    cout<<sl.numberOfSubarrays(v, m);

}