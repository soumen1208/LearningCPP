#include<iostream>
using namespace std;

class ListNode
{
    public:
    
    int data;
    ListNode* next;

    ListNode(int d)
    {
        data = d;
        next = NULL;
    }
};

int length (ListNode* head)
{
    int cnt=0;
    while (head!=NULL)
    {
        /* code */
        head = head->next;
        cnt++;
    }
    return cnt;
}

ListNode* getIntersectionHelper (ListNode* headA, ListNode* headB, int diff)
{
    // length of LL A > length of LL B {is always greater}
    for (int i=0; i<diff; i++)
    {
        headA = headA->next;
    }

    if (headA == headB)
        {
            return headA;
        }

    while (headA!=NULL && headB!=NULL)
    {
        /* code */
        headA = headA->next;
        headB = headB->next;
    }
    return NULL;
    
}

ListNode* getIntersectionNode (ListNode* headA, ListNode* headB)
{
    int lenA = length(headA);
    int lenB = length(headB);

    if (lenA>lenB)
    {
        // LL is longer....
        int diff = lenA - lenB;
        return getIntersectionHelper(headA, headB, diff);
    }
    else
    {
        // LL B is longer....
        int diff = lenB - lenA;
        return getIntersectionHelper(headB, headA, diff);
    }
}
int main()
{
    ListNode* headA = new ListNode(1);
    headA->next=new ListNode(2);
    headA->next->next = new ListNode(3);
    headA->next->next->next = new ListNode(4);
    headA->next->next->next->next = new ListNode(5);


    ListNode* headB = new ListNode(10);
    headB->next = headA->next->next;

    ListNode* intersectionNode = getIntersectionNode (headA, headB);
    cout<<intersectionNode->data<<endl;
}
