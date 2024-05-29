#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll solve(vector<ll> &v){
    ll n=v.size();
    ll dp[n],rt[n];
    for(ll i=0;i<n;i++){
        dp[i]=0;
        rt[i]=i;
    }
    vector<ll> stack{0};
    for(ll i=1;i<n;i++){
        ll curr=v[i];
        while((stack.size()>0) && (curr<v[stack.back()])){
            ll idx=stack.back();
            stack.pop_back();
            rt[idx]=i;
        }
        stack.push_back(i);
    }
    dp[n-1]=v[n-1];
    for(ll i=n-2;i>=0;i--){
        ll ri=rt[i];
        if(ri==i){
            ll curr=(n-i)*v[i];
            dp[i]=curr;
        }else{
            ll us=(ri-i)*(v[i]);
            ll cs=(us+dp[ri]);
            dp[i]=cs;
        }
    }
    ll sum=0;
    sum=accumulate(dp,dp+n,sum);
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