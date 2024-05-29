#include <iostream>
#include<string.h>
using namespace std;
int findIndex(string input, char a){
  for(int i = 0;i<input.length();i++){
    if(input[i] == a){
      return i;
    }
  }
  return -1;
}
int main() 
{   int n = 1;
    while(n --)
    {
    string alphabets ;
    cin>>alphabets;
    string input ;
    cin>>input;
    int sum = 0;
    for(int i = 1;i<input.length();i++){
      //  s[i-1]-s[i+1]]
      //  |5−8|+|12−5|+|12−12|+|15−12|=13 

      sum = sum + abs(findIndex(alphabets,input[i-1]) - findIndex(alphabets,input[i]));
    }
    cout<<sum<<endl;
      
    }
    // cout<<findIndex(order, 's');
    return 0;
}