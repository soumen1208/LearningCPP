#include <iostream>

using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

// Function to remove the nth node from the end of the linked list
ListNode* removeNthFromEnd(ListNode* head, int n) {
    if (!head) {
        return nullptr;
    }

    ListNode* dummy = new ListNode(0);
    dummy->next = head;
    ListNode* slow = dummy;
    ListNode* fast = dummy;

    // Move the fast pointer n+1 steps ahead
    for (int i = 0; i <= n; ++i) {
        if (!fast) {
            // If n is greater than the number of nodes, return -1
            cout << -1 << endl;
            return nullptr;
        }
        fast = fast->next;
    }

    // Move both pointers until the fast pointer reaches the end
    while (fast) {
        slow = slow->next;
        fast = fast->next;
    }

    // Remove the nth node from the end
    ListNode* temp = slow->next;
    slow->next = slow->next->next;
    delete temp;

    return dummy->next;
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
    int n, x;
    cin >> n >> x;

    if (n == 0) {
        // If there is no node in the linked list, print -1
        cout << -1 << endl;
        return 0;
    }

    ListNode* head = nullptr;
    ListNode* current = nullptr;

    // Create the linked list
    for (int i = 0; i < n; ++i) {
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

    // Remove the nth node from the end and print the updated list
    ListNode* updatedHead = removeNthFromEnd(head, x);
    printLinkedList(updatedHead);

    // Free memory allocated for the linked list nodes
    current = updatedHead;
    while (current) {
        ListNode* temp = current;
        current = current->next;
        delete temp;
    }

    return 0;
}
