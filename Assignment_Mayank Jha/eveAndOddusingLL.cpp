#include <iostream>

using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

// Function to arrange elements in a linked list such that all even numbers are placed after odd numbers
ListNode* arrangeLinkedList(ListNode* head) {
    if (!head || !head->next) {
        return head;
    }

    ListNode* oddHead = new ListNode(0);
    ListNode* evenHead = new ListNode(0);
    ListNode* oddCurrent = oddHead;
    ListNode* evenCurrent = evenHead;

    ListNode* current = head;

    while (current) {
        if (current->val % 2 == 0) {
            evenCurrent->next = current;
            evenCurrent = evenCurrent->next;
        } else {
            oddCurrent->next = current;
            oddCurrent = oddCurrent->next;
        }

        current = current->next;
    }

    // Connect the odd and even lists
    oddCurrent->next = evenHead->next;
    evenCurrent->next = NULL;

    ListNode* resultHead = oddHead->next;
    delete oddHead;
    delete evenHead;

    return resultHead;
}

// Function to print the linked list
void printLinkedList(ListNode* head) {
    while (head) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    // Input
    int N;
    cin >> N;

    ListNode* head = nullptr;
    ListNode* current = nullptr;

    // Create the linked list
    for (int i = 0; i < N; ++i) {
        int nodeValue;
        cin >> nodeValue;
        if (!head) {
            head = new ListNode(nodeValue);
            current = head;
        } else {
            current->next = new ListNode(nodeValue);
            current = current->next;
        }
    }

    // Arrange the elements in the linked list
    ListNode* arrangedHead = arrangeLinkedList(head);

    // Print the updated linked list
    printLinkedList(arrangedHead);

    // Free memory allocated for the linked list nodes
    current = arrangedHead;
    while (current) {
        ListNode* temp = current;
        current = current->next;
        delete temp;
    }

    return 0;
}
