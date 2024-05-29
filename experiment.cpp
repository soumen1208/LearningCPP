#include<iostream>
#include <map>
#include<unordered_map>
#include<set>
#include<unordered_set>
#include<queue>
using namespace std;
int main()
{
    // int a[100005] = {0};
    // for (int  i=0; i<100005; i++)
    // {
    //     cout<<a[i];
    // }
   
    // map ....................................................
    map<int, int>m;
    unordered_map<int, int>mm;
    
    //set......................................................
    set<int>s;
    unordered_set<int>ss;
    
    //priority_queue...........................................
    priority_queue<int>pq1;    // max heap
    priority_queue<int, vector<int>, greater<int>>pq2;    // min heap
    

    int n;
    cin>>n;
    
    // input of map.......................................
    for (int i=0; i<n; i++)
    {
        int x , y;
        cin>>x>>y;

        m.insert({x,y});
        mm.insert({x,y});

    }
    
    // input of set...........................................
    for (int i=0; i<n; i++)
    {
        int z;
        cin>>z;

        s.insert(z);
        ss.insert(z);

    }

    // input of priority_queue
    for (int i=0; i<n; i++)
    {
        int k;
        cin>>k;
        pq1.push(k);
        pq2.push(k);

    }
    
    // output of map............................................
    for (auto it = m.begin(); it != m.end(); it++)
    {
        cout<<(*it).first << " "<< (*it).second<<endl;
    }
    
    cout<<endl<<endl;

    for (pair<int, int> x : mm)
    {
        cout<<x.first<<" "<<x.second<<endl;
    }
    
    // output of set...................................................
    for (auto x : s)
    {
        cout<<x<<endl;
    }

    for (auto x: ss)
    {
        cout<<x<<endl;
    }
    
    // searching for map and set................................................
    if (m.find(10) != m.end())
    {
        cout<<" yes ";
    }else{
        cout<<" no ";
    }

    if (m.count(10) == 1)
    {
        cout<<" yes ";
    }else{
        cout<<" no ";
    }

    cout<<endl<<m[5]<<endl;  // adress of map.........................
    
   // output of priroty_queue.........................................
   while (!pq1.empty())
   {
    /* code */
    cout<<pq1.top()<<" "<<endl;
    pq1.pop();
   }

   while (!pq2.empty())
   {
    /* code */
    cout<<pq2.top()<<" "<<endl;
    pq2.pop();
   }
   
   
}