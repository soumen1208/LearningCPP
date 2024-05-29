#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll solve(vector<ll> &v,ll k) {
	ll mn=1e5,mx=-1e5,i,sum=0,r;
    for(i=0;i<v.size();i++)
        mn=min(mn,v[i]),
    mx=max(mx,v[i]);
    if(k==1) return mx;
    if(k==v.size()) return mn;
    r=mx-mn; 
    vector<ll> arr(r+1,0); 
    for(i=0;i<v.size();i++)
        arr[v[i]-mn]++;
    for(i=r;i>=0;i--){
        sum+=arr[i];
        if(sum>=k) return i+mn;
    }
    return mn;
}


int main() {
	ll n,k; cin>>n;
	cin>>k;
	vector<ll> v(n);
	for(ll i=0;i<n;i++)
		cin>>v[i];
	cout<<solve(v,k);
	return 0;
}