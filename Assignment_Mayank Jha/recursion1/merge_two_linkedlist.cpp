#include<bits/stdc++.h>
using namespace std;

class node{
public:
int data;
node*next;

node(int d){
	data=d;
	next=NULL;
}
};

void insertAtTail(node*&head,int data){

if(head==NULL){
	head=new node(data);
	return;
}
node*tail=head;//it means that let node*tail starts from head
while(tail->next!=NULL){
	tail=tail->next; //last node of the linked list
}
tail->next=new node(data);//insert the node at the last node
return ;
}

void buildList(node*&head){
int data,n;
cin>>n;

while(n>0){
	cin>>data;
	insertAtTail(head,data);
	n--;
}
}

void print(node*&head, int data){
// nodetemp=head;
while(head!=NULL){
cout<<data<<" ";
head=head->next;
}
cout<<endl;
}

// istream& operator>>(istream &is,node*&head){
// buildList(head);
// return is;
// }

// ostream& operator<<(ostream &os,node*head){
// print(head);
// return os;
// }

//merge 2 sorted linked lists
node* merge(node*&a,node*&b){
if(a==NULL){
return b;
}else if(b==NULL){
return a;
}
node*c;
//compare elemnt a and b
if(a->data < b->data){
c=a;
c->next=merge(a->next,b);//here a->next means that a->next ids the remaining part and b and then again the function will
}else{
c=b;
c->next=merge(a,b->next);//here if c doenot point to a then the smallest element points is in the b node
}
return c;
}

int main(){
int t;
while (t){
int n;
cin>>n;
node *head = NULL;
node *head2 = NULL;
buildList(head);
cin>>n;
buildList(head2);
merge(head,head2);
print(head);
}
return 0;

}
