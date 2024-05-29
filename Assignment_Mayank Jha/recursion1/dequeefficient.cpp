#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

stack<ll> stack1,stack2;
  
void enqueue(ll element){
    while(!stack1.empty()){
        stack2.push(stack1.top());
        stack1.pop();
    }
    stack1.push(element);
    while(!stack2.empty()){
        stack1.push(stack2.top());
        stack2.pop();
    }
}
  

ll dequeue(){
    if(stack1.empty())  exit(0);
    ll element = stack1.top();
    stack1.pop();
    return element;
}

int main() {
    /* code here */
    ll n; cin>>n;
    for(ll i=0;i<n;i++)
        enqueue(i);
    for(ll i=0;i<n;i++){
		cout<<dequeue()<<" ";
	}
    return 0;
}