#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define nline "\n"


void solve(vector<ll> &v,ll k) {
	vector<ll> top(k+1);
    unordered_map<ll,ll> freq;
    for(ll m=0;m<v.size();m++){
        freq[v[m]]++;
        top[k]=v[m];
        auto it=find(top.begin(),top.end()-1,v[m]);
        for(ll i=distance(top.begin(),it)-1;i>=0;--i){
            if(freq[top[i]]<freq[top[i+1]])
                swap(top[i],top[i+1]);
            else if((freq[top[i]]==freq[top[i+1]]) && (top[i]>top[i+1]))
                swap(top[i],top[i+1]);
            else
                break;
        }
        for(ll i=0;i<k && top[i]!=0;++i)
            cout<<top[i]<<' ';
    }
    cout<<nline;
}


int main() {
   	ll t; cin>>t;
   	while(t--){
	   	ll n,k; cin>>n>>k;
       	vector<ll> v(n);
	   	for(ll i=0;i<n;i++)
	   		cin>>v[i];
       	solve(v,k);
   	}
	return 0;
}