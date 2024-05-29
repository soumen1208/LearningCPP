#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;
typedef long double ld;

// void init_code(){
//     #ifndef ONLINE_JUDGE
//     freopen("TEST1.txt", "r", stdin);
//     freopen("TEST2.txt", "w", stdout);
//     #endif
// }

void solve(){
  ll n,t; cin>>n>>t;
  ll a[n];
  for(ll i=0;i<n;i++)
    cin>>a[i];
  ll maxi=0;
  for(ll i=0;i<n;i++){
      ll sum=0,cnt=0;
      for(ll j=i;j<n;j++){
          sum+=a[j];
          if(sum>t)
            break;
          cnt++;
      }
      maxi=max(maxi,cnt);
  }
  cout<<maxi<<"\n";
}


int main(){
//   init_code();
//   ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
  // ll t; cin>>t; 
  // while(t--){
  //   solve();
  // }
  solve();
  return 0;
}