#include<iostream>
using namespace std;
int main () {

	int N;
	cin>>N;

	// rows loop.......
	for (int i =0; i<N; i++){
		// coulmn loop..... 
		for(int j=0; j<=i;j++){
			cout<<j+1<<" ";
		}
		cout<<"\n";
	}
	return 0;
} 