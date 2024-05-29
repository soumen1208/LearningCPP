// #include<bits/stdc++.h>
// using namespace std;

// class Solution {
// public:
//     int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {

//            int result = 0;

//         sort(boxTypes.begin(), boxTypes.end(), [](auto& a, auto& b) {
//             return a[1] > b[1];
//         });

//         for (auto& box : boxTypes) {
//             if (truckSize < box[0]) {
//                 result += (truckSize * box[1]);
//                 break;
//             }
//             result += (box[0] * box[1]);
//             truckSize -= box[0];
//         }

//         return result;
//     }
    
// };

// int main()
// {
//     int n=3,m =1;
//     // cin>>m;

//     int trucksize;
//     cin>>trucksize;
    
//     vector <vector<int>> v;
//     v.resize(m,vector<int>(n));

//     //v = {{1,2,3}, {4,5,6}, {7,8,9}}; 

//     /** input from use **/
//     for(int i=0; i<n; i++)
//     {
//        for(int j=0; j<m; j++)
//        {
//           cin>>v[i][j];
//        }
//     }


//     Solution sp;
//     cout<<sp.maximumUnits(v, trucksize);
// }







#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
    sort(boxTypes.begin(), boxTypes.end(), [](const vector<int>& a, const vector<int>& b){
        return a[1] > b[1];
    });
    int maxUnits = 0;
    int i = 0;
    while (truckSize > 0 && i < boxTypes.size()) {
        if (boxTypes[i][0] <= truckSize) {
            maxUnits += boxTypes[i][0] * boxTypes[i][1];
            truckSize -= boxTypes[i][0];
        } else {
            maxUnits += truckSize * boxTypes[i][1];
            break;
        }
        i++;
    }
    return maxUnits;
}
int main() {

   int n, m;
   cin>>n;

   int truckSize;
   cin>>truckSize;
    //vector<vector<int>> boxTypes{{1,3},{2,2},{3,1}};
    //cout << maximumUnits(boxTypes, 4) << endl;
   vector<vector<int>>boxTypes(n, vector<int>(2, 0)); 
   cout << maximumUnits(boxTypes, 10) << endl;
}