#include <bits/stdc++.h>

using namespace std;
struct Node {
	int data;
	struct Node* next;

	Node(int x)
	{
		data = x;
		next = NULL;
	}
};
void p(Node* node)
{
	while (node) {
		cout << node->data << " ";
		node = node->next;
	}
}
Node* divide(Node* head)
{

	queue<Node*> qe, qo,q;
	Node* cur = head;
	while (cur) {
		if (cur->data % 2 == 0)
			qe.push(cur);
		else
			qo.push(cur);
		cur = cur->next;
	}
	Node* node = new Node(-100);
	Node* ans = node;

	while (!qe.empty()) {
		q.push(qe.front());
		qe.pop();
	}

	while (!qo.empty()) {
		q.push(qo.front());
		qo.pop();
	}
	while (!q.empty()) {
		node->next = q.front();
		node = q.front();
		q.pop();
	}

	node->next = NULL;
	return ans->next;
}

int main()
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
            head = divide(head);
            current = head;
        }
        else
        {
            current->next = divide(head);
            current = current->next;
        }
    }
	Node* temp = divide(head);
	p(temp);

	return 0;
}
