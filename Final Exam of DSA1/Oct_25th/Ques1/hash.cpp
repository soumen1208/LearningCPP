#include<bits/stdc++.h>
using namespace std;

#define nthline "\n"
typedef long long ll;
#define mike(i,a,b) for(int i=a;i<b;i++)

#define pub push_back

void solt(){
    ll n; cin>>n;
    ll a[n];
    mike(i,0,n) cin>>a[i];
    map<ll,ll> mp;
    vector<ll>vtr;
    for(ll i=n-1;i>=0;i--){
        if(mp[a[i]]==0){
            vtr.pub(a[i]);
            mp[a[i]]++;
        }
    }
    reverse(vtr.begin(),vtr.end());
    for(auto x : vtr)
        cout<<x<<nthline;
}

int main(){
    solt();
}