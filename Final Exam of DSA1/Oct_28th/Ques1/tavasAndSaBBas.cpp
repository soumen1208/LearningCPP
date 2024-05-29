#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long l,i,k,sum,luNos;
    string s;
    while(cin>>s){
        l=s.size();
        sum=0,k=1;
        for(i=l-1; i>=0; i--){
            if(s[i] == '7')
                luNos = pow(2,k);
            else
                luNos = pow(2,k)-pow(2,k-1);
                k++;
                sum = sum + luNos;
        }
        cout<<sum<<endl;
    }
    return 0;
}