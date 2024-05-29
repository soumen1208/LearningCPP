#include <iostream>
using namespace std;
int main()

/*
         1  
      2  3  2  
   3  4  5  4  3
4  5  6  7  6  5  4 

*/
{
    int n, count=0, count1=0, k=0;
    cin>>n;

    for (int i=1; i<=n; i++){
        for (int j=1; j<=n-i; j++){
            cout<<"   ";
            count++;
        }
        while (k != 2*i-1){
        if (count <= n-1){
            cout<<i+k<<"  ";
            count++;
        }else {
            count1++;
            cout<<i+k-2*count1<<"  ";
        }
        k++;
        }
        count = count1 = k = 0;
        cout<<"\n";
    }
    return 0;
}