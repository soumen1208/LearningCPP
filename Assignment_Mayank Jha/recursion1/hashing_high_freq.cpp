#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll solve(vector<ll> &v) {
	unordered_map<ll,ll> hash;
    for(ll i=0;i<v.size();i++)
        hash[v[i]]++;
    ll max_count=0,res=-1;
    for(auto i : hash){
        if(max_count < i.second){
            res=i.first;
            max_count=i.second;
        }
    }
    return res;
}


int main() {
	ll n; cin>>n;
	vector<ll> v(n);
	for(ll i=0;i<n;i++)
		cin>>v[i];
	ll ans=solve(v);
	cout<<ans;
	return 0;
}