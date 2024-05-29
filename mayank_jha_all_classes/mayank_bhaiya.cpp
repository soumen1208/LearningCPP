#include <bits/stdc++.h>
 using namespace std;
// void print_vector(vector<int> v){
   
//    for(int i = 0; i<v.size(); i++){
//       cout << v[i] << " ";
//    }
   
// }
// class Solution {
//    public:
//    vector<int> numsSameConsecDiff(int N, int K) {
//       vector <int> dp[N + 1];
//       for(int i = 1; i <= 9; i++){
//          dp[1].push_back(i);
//       }
//       for(int i = 1; i < N; i++){
//          set <int> visited;
//          for(int j = 0; j < dp[i].size(); j++){
//             int x = dp[i][j];
//             int lastNum = x % 10;
//             int digit = lastNum + K;
//             if(digit >= 0 && digit <= 9 && !visited.count(x * 10 + digit)){
//                dp[i + 1].push_back(x * 10 + digit);
//                visited.insert(x * 10 + digit);
//             }
//             digit = lastNum - K;
//             if(digit >= 0 && digit <= 9 && !visited.count(x * 10 + digit)){
//                dp[i + 1].push_back(x * 10 + digit);
//                visited.insert(x * 10 + digit);
//             }
//          }
//       }
//       if(N == 1){
//          dp[N].push_back(0);
//       }
//       return dp[N];
//    }
// };
// main(){
//     int n, k;
//     cin>>n>>k;
//    Solution ob;
//    print_vector(ob.numsSameConsecDiff(n,k));
// }

//.......................................................................................................................................

// class MayankBhaiya {
// public:
//     vector<int> numsSameConsecDiff(int n, int k) {

//         vector<int> result;
//         queue<pair<int,int>> q;
// 				for(int i=1;i<=9;i++){   
//             q.push({i,1});
//             while(!q.empty()){
//                 pair<int, int> curr=q.front();
//                 q.pop();
//                 int num=curr.first;
//                 int length=curr.second;
//                 if(length==n){
//                     result.push_back(num);
//                     continue;
//                 }
//                 int last_digit=num%10;
//                 if(k==0)
//                     q.push({num*10+last_digit, length+1});
//                 else{
//                     if(last_digit+k<10)
//                         q.push({num*10+last_digit+k, length+1});
//                     if(last_digit-k>=0)
//                         q.push({num*10+last_digit-k, length+1});
//                 }
//             }
//         }
//         return result;
        
//     }
// };

//.....................................................................................................................................


class MayankBhaiya {
public:
    vector<int> padosi(int num, int k){
        vector<int> ret;
        for (int i=0; i<=9; i++) {
            if (abs(i-num)==k) ret.push_back(i);
        }
        return ret;
    }
    
    void dfs(int st, int &ds, vector<int> &ans, int n, int k, int check ){
        if (ds/check>=1) {
            ans.push_back(ds);
            return;
        }
        vector<int> neighbors = padosi(st, k);
        for (auto it : neighbors) {
            int temp = ds;
            ds = 10*ds+it;
            dfs(it, ds, ans, n, k, check);
            ds = temp;
        }
    }
    
    vector<int> numsSameConsecDiff(int n, int k) {
        vector<int> ans;
        int check = pow(10, n-1);
        for (int i=1; i<=9; i++) {
            int ds = i;
            dfs(i, ds, ans, n, k, check);
        }
        return ans;
    }
};

void print_vector(vector<int> v){
   
   for(int i = 0; i<v.size(); i++){
      cout << v[i] << " ";
   }
   
}

int main()
{
    int n, k;
    cin>>n>>k;

    MayankBhaiya mb;
    print_vector(mb.numsSameConsecDiff(n,k));
}