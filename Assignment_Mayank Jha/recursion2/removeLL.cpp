#include <iostream>
// #include <bits/stdc++.h>

using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

// Function to remove nodes with the specified value
ListNode* removeElements(ListNode* head, int val) {
    ListNode* dummy = new ListNode(0);
    dummy->next = head;
    ListNode* current = dummy;

    while (current->next) {
        if (current->next->val == val) {
            ListNode* temp = current->next;
            current->next = current->next->next;
            delete temp;
        } else {
            current = current->next;
        }
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

int main() 
{
    // Input
    int N, val;
    cin >> N >> val;

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

    // Remove nodes with the specified value
    ListNode* newHead = removeElements(head, val);

    // Print the new linked list
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
// #include <iostream>

// using namespace std;

// // Definition for singly-linked list.
// struct ListNode {
//     int val;
//     ListNode* next;
//     ListNode(int x) : val(x), next(NULL) {}
// };

// // Function to remove nodes with the specified value
// ListNode* removeElements(ListNode* head, int val) {
//     ListNode* dummy = new ListNode(0);
//     dummy->next = head;
//     ListNode* current = dummy;

//     while (current->next) {
//         if (current->next->val == val) {
//             ListNode* temp = current->next;
//             current->next = current->next->next;
//             delete temp;
//         } else {
//             current = current->next;
//         }
//     }

//     return dummy->next;
// }

// // Function to print the linked list
// void printLinkedList(ListNode* head) {
//     while (head) {
//         cout << head->val << " ";
//         head = head->next;
//     }
//     cout << endl;
// }

// int main() {
//     // Input
//     int N, val;
//     cin >> N >> val;

//     ListNode* head = nullptr;
//     ListNode* current = nullptr;

//     // Create the linked list
//     for (int i = 0; i < N; ++i) {
//         int nodeValue;
//         cin >> nodeValue;
//         if (!head) {
//             head = new ListNode(nodeValue);
//             current = head;
//         } else {
//             current->next = new ListNode(nodeValue);
//             current = current->next;
//         }
//     }

//     // Remove nodes with the specified value
//     ListNode* newHead = removeElements(head, val);

//     // Print the new linked list
//     printLinkedList(newHead);

//     // Free memory allocated for the linked list nodes
//     current = newHead;
//     while (current) {
//         ListNode* temp = current;
//         current = current->next;
//         delete temp;
//     }

//     return 0;
// }
