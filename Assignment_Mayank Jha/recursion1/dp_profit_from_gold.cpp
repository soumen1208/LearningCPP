#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll solve(vector<ll> &v){
    ll sum=0;
    for(ll i=0;i<v.size()-1;i++)
        if(v[i+1]>v[i])
            sum=sum+v[i+1]-v[i];
    return sum;
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