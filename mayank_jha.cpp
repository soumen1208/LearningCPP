#include<iostream>   // iostream is a Library
#include<vector>    // this is the vector library
#include<utility> // this is the library of pair
using namespace std; // namespace standaard 
int main()
{
    vector<int>v={6,7,8,9};
    int m=4;
    int arr[] = {1,2,3,4,5};
    int n = 5;
    for (int i=0; i<n; i++)
    {
        cout<<arr[i]<<" "; 
    }

    cout<<endl;

    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout<<*it<<" ";
    }
    
    cout<<"\n";

    pair<int, int> p = {1,2};
    cout<<p.first<<" "<<p.second<<endl;

    p = make_pair(10, 11);
    cout<<p.first<<" "<<p.second;

    vector<pair<int, int>>ans;
    int s;
    cin>>s;

    // input the value
    for (int i=0; i<n; i++)
    {
        int x, y;
        cin>>x,y;
        ans.push_back({x,y});
    }

        for (int i=0; i<n; i++)
        {
            cout<<ans[i].first<<" "<<ans[i].second<<endl;
        }

        // for each loop
        for (auto x : ans){
            cout<<x.first<<x.second;
        }

        for (auto it = ans.begin(); it != ans.end(); it++){
            cout<<(*it).first<<(*it).second;
        }

}