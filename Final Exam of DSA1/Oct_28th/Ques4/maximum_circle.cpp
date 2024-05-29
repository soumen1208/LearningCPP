#include <bits/stdc++.h>
using namespace std;

bool circle (pair<int,int>x, pair<int,int>y){
    if((x.first+x.second)==(y.first+y.second)){
		return (x.first-x.second)<(y.first-y.second);
	}else{
		return (x.first+x.second)<(y.first+y.second);
	}
}
int main() {
    int ans = 1;
    int n,k,z;
    cin>>n;
    vector <pair<int,int>> pv;

    for(int i=0;i<n;i++){
        cin>>z>>k;
        pv.push_back(make_pair(z,k));
        // pv.push_back(make_p)
    }

sort(pv.begin(),pv.end(), circle);

int sol = pv[0].first+pv[0].second;

for(int i=0;i<n-1;i++){
    if(sol <= pv[i+1].first-pv[i+1].second){
        ans++;
        sol = pv[i+1].first+pv[i+1].second;
    }

}
cout<<n-ans;
}