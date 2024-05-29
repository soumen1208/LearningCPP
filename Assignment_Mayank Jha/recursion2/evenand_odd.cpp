#include<bits/stdc++.h>
using namespace std;

// Linked List Node
struct Node
{
	int data;
	struct Node* next;
};

// A utility function to create a new node
Node* newNode(int key)
{
	Node *temp = new Node;
	temp->data = key;
	temp->next = NULL;
	return temp;
}


void rearrangeEvenOdd(Node *head)
{
if(head==NULL || head->next == NULL){
	return;
}
Node* temp = head;
Node* oddStart = NULL; //ODD INDEX
Node* oddEnd = NULL;
Node* evenStart = NULL; //EVEN INDEX
Node* evenEnd = NULL;

int i = 1;
while(temp != NULL){

	if(i%2 ==0){
	//even
	if(evenStart == NULL){
		evenStart = temp;

	}
	else{
		evenEnd->next = temp;

	}
	evenEnd = temp;
	}
	else{
	//odd
	if(oddStart == NULL){
		oddStart = temp;
	}
	else{
		oddEnd->next = temp;
	}
	oddEnd = temp;
	}
	temp = temp->next;
	i++;
}

oddEnd->next = evenStart;
evenEnd->next = NULL;

head = oddStart; //new head
}

void printlist(Node * node)
{
	while (node != NULL)
	{
		cout << node->data<<" ";
		node = node->next;
	}
}

// Driver code
int main(void)
{
	int n;
    //cout << "Enter the number of nodes: ";
    cin >> n;

    Node *head = NULL;
    Node *current = NULL;

    //cout << "Enter the values for the nodes: ";
    for (int i = 0; i < n; i++)
    {
        int value;
        cin >> value;
        if (head == NULL)
        {
            head = newNode(value);
            current = head;
        }
        else
        {
            current->next = newNode(value);
            current = current->next;
        }
    }
	cout << "Original List: ";
	printlist(head);

	rearrangeEvenOdd(head);

	cout << "\nModified List: ";
	printlist(head);

	return 0;
}