#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll solve(vector<ll> &v){
    ll minPrice=v[0];
    ll maxProfit=0;
    for(const ll price : v){
        ll currentProfit=price-minPrice;
        minPrice=min(minPrice,price);
        maxProfit=max(maxProfit,price-minPrice);
    }
    return maxProfit;
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