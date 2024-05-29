#include <iostream>

using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

// Function to merge two sorted linked lists
ListNode* mergeSortedLists(ListNode* l1, ListNode* l2) {
    ListNode* dummy = new ListNode(0);
    ListNode* current = dummy;

    while (l1 && l2) {
        if (l1->val <= l2->val) {
            current->next = l1;
            l1 = l1->next;
        } else {
            current->next = l2;
            l2 = l2->next;
        }
        current = current->next;
    }

    // Connect the remaining nodes
    if (l1) {
        current->next = l1;
    }
    if (l2) {
        current->next = l2;
    }

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
    int T;
    cin >> T;

    while (T--) {
        int N1, N2;
        cin >> N1;

        ListNode* l1 = nullptr;
        ListNode* current1 = nullptr;

        // Create the first linked list
        for (int i = 0; i < N1; ++i) {
            int nodeValue;
            cin >> nodeValue;
            if (!l1) {
                l1 = new ListNode(nodeValue);
                current1 = l1;
            } else {
                current1->next = new ListNode(nodeValue);
                current1 = current1->next;
            }
        }

        cin >> N2;

        ListNode* l2 = nullptr;
        ListNode* current2 = nullptr;

        // Create the second linked list
        for (int i = 0; i < N2; ++i) {
            int nodeValue;
            cin >> nodeValue;
            if (!l2) {
                l2 = new ListNode(nodeValue);
                current2 = l2;
            } else {
                current2->next = new ListNode(nodeValue);
                current2 = current2->next;
            }
        }

        // Merge the two sorted linked lists
        ListNode* mergedList = mergeSortedLists(l1, l2);

        // Print the merged linked list
        printLinkedList(mergedList);

        // Free memory allocated for the linked list nodes
        current1 = l1;
        while (current1) {
            ListNode* temp = current1;
            current1 = current1->next;
            delete temp;
        }

        current2 = l2;
        while (current2) {
            ListNode* temp = current2;
            current2 = current2->next;
            delete temp;
        }

        // Free memory allocated for the merged linked list nodes
        current1 = mergedList;
        while (current1) {
            ListNode* temp = current1;
            current1 = current1->next;
            delete temp;
        }
    }

    return 0;
}
