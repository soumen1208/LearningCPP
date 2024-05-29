#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll solve(vector<ll> &v){
	ll n=v.size();
    stack<ll> s;
    s.push(-1);
    ll area=v[0],i=0;
    vector<ll> lr(n,-1),rr(n,n);
    while(i<n){
        while(!s.empty() && s.top()!=-1 && v[s.top()]>v[i]){
            rr[s.top()]=i;
            s.pop();
        }
        if(i>0 && v[i]==v[i-1])
            lr[i]=lr[i-1];
        else
            lr[i]=s.top();
        s.push(i);
        i++;
    }
    for(ll j=0;j<n;j++)
        area=max(area,v[j]*(rr[j]-lr[j]-1));
    return area;
}

int main() {
    /* code here */
    ll n; cin>>n;
    vector<ll> v(n);
    for(ll i=0;i<n;i++)
        cin>>v[i];
    cout<<solve(v);
    return 0;
}