#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> partitionLabels(string s) {
      vector<int> partition;
      int arr[26] = {0};
      for(char ch: s){
          arr[ch-'a']++;
      }
      int len = 0;
      set<char> mySet;
      for(char ch: s ){
          mySet.insert(ch);
          arr[ch-'a']--;
          len++;
          if(!arr[ch-'a']){
          mySet.erase(ch);
          }
          if(mySet.empty()){
              partition.push_back(len);
              len=0;
          }
      }
      return partition;
    }
};

int main()
{
    string s;
    vector<string> ss;
    cin>>s;
    ss.push_back(s);
    Solution m;
    m.partitionLabels(s);

}