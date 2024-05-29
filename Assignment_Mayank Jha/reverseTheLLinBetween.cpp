#include <iostream>

using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

// Function to reverse a portion of the linked list specified by left and right pointers
ListNode* reverseBetween(ListNode* head, int left, int right) {
    if (!head || left == right) {
        return head;
    }

    ListNode* dummy = new ListNode(0);
    dummy->next = head;
    ListNode* pre = dummy;

    // Move pre to the node before the reversed portion
    for (int i = 1; i < left; ++i) {
        pre = pre->next;
    }

    // Reverse the portion between left and right
    ListNode* current = pre->next;
    ListNode* nextNode = nullptr;
    ListNode* prev = nullptr;

    for (int i = left; i <= right; ++i) {
        nextNode = current->next;
        current->next = prev;
        prev = current;
        current = nextNode;
    }

    // Connect the reversed portion back to the list
    pre->next->next = current;
    pre->next = prev;

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

    // Input left and right pointers
    int left, right;
    cin >> left >> right;

    // Reverse the portion specified by left and right pointers
    ListNode* newHead = reverseBetween(head, left, right);

    // Print the updated linked list
    printLinkedList(newHead);

    // Free memory allocated for the linked list nodes
    current = newHead;
    while (current) {
        ListNode* temp = current;
        current = current->next;
        delete temp;
    }

    return 0;
}
