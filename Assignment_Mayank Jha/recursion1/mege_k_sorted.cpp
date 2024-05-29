#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(vector<vector<ll>> &v) {
	vector<ll> outputArr;
	for(auto r: v)
	    for(auto x: r)
	        outputArr.push_back(x);
	sort(outputArr.begin(),outputArr.end());
	for(ll i=0;i<outputArr.size();i++)
		cout<<outputArr[i]<<" ";
}


int main() {
	ll k,n; cin>>k>>n;
	vector<vector<ll>> v(k,vector<ll>(n));
	for(ll i=0;i<k;i++)
		for(ll j=0;j<n;j++)
			cin>>v[i][j];
	solve(v);
	return 0;
}