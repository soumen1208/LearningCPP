#include<iostream>
#include<vector>
#include<utility>
using namespace std;
int main()
{
    vector<pair<int, int>>ans;
    int n;
    cin>>n;

    // input the value
    for (int i=0; i<n; i++)
    {
        int x, y;
        cin>>x>>y;
        // ans.push_back(make_pair(x,y));
        ans.push_back({x,y});
    }

    for (int i=0; i<n; i++)
    {
    cout<<ans[i].first<<" "<<ans[i].second<<endl;
    }
     
     cout<<endl;
    // for each loop
    for (auto x : ans){     // pair<int, int> x:ans
    cout<<x.first<<" "<<x.second<<endl;
    }
   
    cout<<endl;
    
    for (auto it = ans.begin(); it != ans.end(); it++){          // vector<pair<int, int>>iterator :: it = ans.begin(); ..........
    cout<<(*it).first<<" "<<(*it).second<<endl;
    }
}