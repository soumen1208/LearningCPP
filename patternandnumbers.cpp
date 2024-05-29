#include<iostream>
using namespace std;

int main()
{
	int n=7;

	for (int i=0; i<n; i++){
		for (int j=0; j<=i; j++){
			cout<<j+1;
		}
            for(int j=n; j>i+1; j--){
                cout<<"*";
            }
        cout<<"\n";
	}
	return 0;
}