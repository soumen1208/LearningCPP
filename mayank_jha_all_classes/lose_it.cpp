#include <iostream> 
#include <algorithm>
#include <cstring>
#include <map>
using namespace std;
map<int, int >mp; int ans [10]={0};
int main()
{
mp[4]=1;
mp[8]=2;
mp[15]=3;
mp[16]=4;
mp[23]=5; mp[42]=6;
int n;
cin>>n;
for(int i=1;i<=n;i++)
{
int a;
cin>>a;
if(mp[a]==1)
ans [mp[a]]++;
else if(ans [mp[a]-1]>ans[mp[a]])
ans [mp[a]]++;
}
cout<<n-6*ans[6]<<endl;
return 0;
}