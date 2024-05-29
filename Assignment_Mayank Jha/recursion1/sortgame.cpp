#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

bool solve(pair<string,ll> p1,pair<string,ll> p2) {
	if(p1.second==p2.second)   
    	return p1.first<p2.first;  
    return p1.second>p2.second;
}


int main() {
	ll x,n; cin>>x>>n;
	pair<string,ll> emp[n];
    for(int i=0;i<n;i++){
		string name; ll salary;
        cin>>name>>salary;
        emp[i].first=name;
        emp[i].second=salary;
    }
    sort(emp,emp+n,solve);
    for(int i=0;i<n;i++){
        if(emp[i].second>=x)     
        	cout<<emp[i].first<<" "<<emp[i].second<<endl;
    }
	return 0;
}