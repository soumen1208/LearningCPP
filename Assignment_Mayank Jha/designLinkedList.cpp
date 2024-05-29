#include <iostream>

using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

class MyLinkedList {
private:
    ListNode* head;

public:
    MyLinkedList() {
        head = NULL;
    }

    int get(int index) {
        if (index < 0 || head == NULL) {
            return -1;
        }

        ListNode* current = head;

        for (int i = 0; i < index; ++i) {
            if (current == NULL) {
                return -1;
            }
            current = current->next;
        }

        return current ? current->val : -1;
    }

    void addAtHead(int val) {
        ListNode* newNode = new ListNode(val);
        newNode->next = head;
        head = newNode;
    }

    void addAtTail(int val) {
        ListNode* newNode = new ListNode(val);

        if (head == NULL) {
            head = newNode;
            return;
        }

        ListNode* current = head;
        while (current->next != NULL) {
            current = current->next;
        }

        current->next = newNode;
    }

    void addAtIndex(int index, int val) {
        if (index < 0) {
            return;
        }

        if (index == 0) {
            addAtHead(val);
            return;
        }

        ListNode* newNode = new ListNode(val);
        ListNode* current = head;

        for (int i = 0; i < index - 1; ++i) {
            if (current == NULL) {
                return;
            }
            current = current->next;
        }

        if (current == NULL) {
            return;
        }

        newNode->next = current->next;
        current->next = newNode;
    }

    void deleteAtIndex(int index) {
        if (index < 0 || head == NULL) {
            return;
        }

        if (index == 0) {
            ListNode* temp = head;
            head = head->next;
            delete temp;
            return;
        }

        ListNode* current = head;

        for (int i = 0; i < index - 1; ++i) {
            if (current == NULL || current->next == NULL) {
                return;
            }
            current = current->next;
        }

        if (current->next == NULL) {
            return;
        }

        ListNode* temp = current->next;
        current->next = current->next->next;
        delete temp;
    }
};

int main() {
    MyLinkedList linkedList;

    int operations;
    cin >> operations;

    for (int i = 0; i < operations; ++i) {
        int operationType;
        cin >> operationType;

        switch (operationType) {
            case 1: {
                // get
                int index;
                cin >> index;
                cout << linkedList.get(index) << " ";
                break;
            }
            case 2: {
                // addAtHead
                int val;
                cin >> val;
                linkedList.addAtHead(val);
                break;
            }
            case 3: {
                // addAtTail
                int val;
                cin >> val;
                linkedList.addAtTail(val);
                break;
            }
            case 4: {
                // addAtIndex
                int index, val;
                cin >> index >> val;
                linkedList.addAtIndex(index, val);
                break;
            }
            case 5: {
                // deleteAtIndex
                int index;
                cin >> index;
                linkedList.deleteAtIndex(index);
                break;
            }
        }
    }

    return 0;
}
