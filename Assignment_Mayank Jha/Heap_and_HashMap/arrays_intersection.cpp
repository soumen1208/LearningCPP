#include<iostream>
#include<algorithm>
using namespace std;

void intersection(int arr1[], int arr2[], int n)
{
    int i=0, j=0;

    sort(arr1, arr1+n);
    sort(arr2, arr2+n);
    cout<<"[";

    while(i<n && j<n)
    {
        if (arr1[i] < arr2[j])
        i++;

        else if (arr1[i]>arr2[j])
        j++;

        else
       {
        cout<<arr2[j]<< ",";
        i++;
        j++;
       }
    }
    
    cout<<"]";
}


int main()
{
    int n;
    cin>>n;

    int arr1[n] = {};
    int arr2[n] = {};
    for(int i=0; i<n; i++)
    {
        cin>>arr1[i];
    }

    //int arr2[m]={};
    for (int j=0; j<n; j++)
    {
        cin>>arr2[j];
    }

    intersection(arr1, arr2, n);

    return 0;
}








/*++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/


// // #include <iostream>
// // #include<vector>
// // #include<bits/stdc++.h>
// // using namespace std;

// // class Solution

// // {
// //     public:

// //     vector<int> intersection (vector<int> &num1, vector<int> &num2)
// //     {
// //         int l1 = num1.size(), l2=num2.size(), i=0, j=0;

// //         vector<int>ans;

// //         sort(num1.begin(), num1.end());
// //         sort(num2.begin(), num2.end());

// //         while (i<l1 && j<l2)
// //         {
// //             /* code */
// //             if (num1[i] < num2[j])
// //             i++;

// //             else if (num1[i]>num2[j])
// //             {
// //                 ans.push_back(num1[i]);
// //                 i++;
// //                 j++;

// //             }

// //             else if (num1[i]>num2[j])
// //             j++;
// //         }

// //         ans.erase(unique(ans.begin(), ans.end()), ans.end());
// //         return ans;
        
// //     }
// // };

// // int main()
// // {
// //     int n;
// //     cin>>n;

// //     vector<int> num1;
// //     vector<int> num2;
    
// //     for (int i=0; i<n; i++)
// //     {
// //         num1.push_back(n);
// //     }

// //     for (int i=0; i<n; i++)
// //     {
// //         num2.push_back(n);
// //     }

// //     Solution s1;
// //     s1.intersection(num1, num2);

// // }



// /* ================================================================================================================================= */

// #include<iostream>
// // #include<bits/stdc++.h>
// #include<algorithm>
// using namespace std;

// int intersection(int arr1[], int arr2[], int n)
// {
//     int i=0, j=0;

//     sort(arr1, arr1+n);
//     sort(arr2, arr2+n);

//     while(i<n && j<n)
//     {
//         if (arr1[i] < arr2[j])
//         i++;

//         else if (arr1[i]>arr2[j])
//         j++;

//         else
//        {
//          cout<<arr2[j]<<" ";
//         i++;
//         j++;
//        }
//     }
// }


// int main()
// {
//     int n;
//     cin>>n;

//     int arr1[n] = {};
//     int arr2[n] = {};
//     for(int i=0; i<n; i++)
//     {
//         cin>>arr1[i];
//     }

//     //int arr2[m]={};
//     for (int j=0; j<n; j++)
//     {
//         cin>>arr2[j];
//     }

//     intersection(arr1, arr2, n);

//     return 0;
// }



/* ================================================================================================================================= */


// // C++ program to find intersection of
// // two sorted arrays
// #include <bits/stdc++.h>
// using namespace std;
 
// /* Function prints Intersection of arr1[] and arr2[]
// m is the number of elements in arr1[]
// n is the number of elements in arr2[] */
// void printIntersection(int arr1[], int arr2[], int n)
// {
//     int i = 0, j = 0;
//     while (i < n && j < n) {
//         if (arr1[i] < arr2[j])
//             i++;
//         else if (arr2[j] < arr1[i])
//             j++;
//         else /* if arr1[i] == arr2[j] */
//         {
//             cout << arr2[j] << " ";
//             i++;
//             j++;
//         }
//     }
// }
 
// /* Driver program to test above function */
// int main()
// {
    
//     //int m; // = sizeof(arr1) / sizeof(arr1[0]);
//     int n; // = sizeof(arr2) / sizeof(arr2[0]);
    
//     cin>>n;

//     int arr1[n]={}; // = { 1, 2, 3, 1, 2, 4, 1 };
//     int arr2[n]= {};  // = { 2, 1, 3, 1, 5, 2, 2 };

//     for (int i=0;i<n;i++)
//     {
//         cin>>arr1[i];
//     }

//     for (int j=0; j<n; j++)
//     {
//         cin>>arr2[j];
//     }
 
//     // Function calling
//     printIntersection(arr1, arr2, n);
 
//     return 0;
// }


/* ======================================================================================================================== */

