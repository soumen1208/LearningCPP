#include <iostream>
using namespace std;

class Node         // alaways when we will use Node 1st, take class for Node.............
{
    public:

    int data;
    Node* next;

    // constructer for intialisation ............
    Node(int d)
    {
        data = d;
        next = NULL;
    }
};

// Insertion in head .....

    void insertionAtHead (Node* &head, Node* &tail, int data)
    {
        // just need info about twpo things TWO STTRUNG
        // head of  LL
        // tail of LL
        // what data need to inserted

        if (head == NULL)
        {
            //LL is empty
            head = new Node(data);
            tail = head;
        } 
        else
        {
            /// LL is not empty .....
            Node* newNode = new Node(data);
            newNode->next = head;
            head = newNode;
        }
    }

// this is show in main func.......

    void display(Node* head)
{
        // Node* tmp = head;
    if (head == NULL)
    return;
    

    while (head != NULL)
    {
        cout<<head->data<<"->";
        head = head->next;
    }
    cout<<"NULL";
    
}

int lengthOfLL (Node* head)
{
    int cnt = 0;
    
    while (head != NULL)
    {
        cnt++;
        head=head->next;
    }

    return cnt;

}


// insertion at tail ............

void insertionAtTail (Node* &head, Node* &tail, int data)
{
    // LL is empty .......

    if (head == NULL)
    {
        Node* newNode = new Node(data);
        head=newNode;
        tail=newNode;
        return;
    }else {

        // LL is not empty.......
        Node* newtail = new Node(data);
        tail->next=newtail;
        tail = newtail;
    }

}    

//  #########################################################################################################################################################
// void insertionattail (Node* &head, int data)
// {
//     // LL is empty.....
//     if (head == NULL)
//     {
//         Node* newNode = new Node(data);
//         head = newNode;
//         return;
//     }else {
//         Node* currentNode = head;
//         while ( currentNode -> next != NULL)
//         {
//             currentNode = currentNode->next;
//         }

//         currentNode->next = new Node (data);
        
//     }
// }
//   #######################################################################################################################################################

// get length of the Linked List..............


// Insertion at kth position .................

void insertionAtKthposition (Node* &head, Node* &tail, int data, int k)
{
     
// when is Empty........
    if (k == 0)
    {
        insertionAtHead(head, tail, data);
        return;

    }
// when length greater than the k then put the value in tail ...

    else if ( k >= lengthOfLL(head))
    {
        insertionAtTail(head, tail, data);
        return;
    }
// when insertion in any general position ........
    else
    {
        // took k-1 jump.............

        Node* curr = head;  // for read.....
        for (int i=1; i <=k-1; i++)
        curr = curr->next;

        Node* newNode = new Node (data);
        Node* tmp = curr->next;

        curr->next = newNode;
        newNode ->next = tmp;
    }

}

// Deletion at head ...................................................

void deletionAtHead (Node* &head, Node* &tail)
{
    // when LL is empty .......
    if (head == NULL)
    {
        cout<<"can't delete";
        return;
    }
    // when LL in one Node........
    else if (head->next == NULL)       
    {
        delete head;  // for avoid memory leakage ........
        head = NULL;
        tail = NULL;
    }

    // when LL has many Node.........
    else 
    {
        Node* tmp = head;
        head = head->next; // for memory leakage ....the nodes some storage occupying after  
                           // also, now head is next node head 
        delete tmp;
     }
}


void deletionAtTail (Node* &head, Node* &tail)
{
    if (head == NULL)
    {
        cout<<"cant delete";
        return;
    }
    else if (head->next == NULL)
    {
        delete head;
        head = NULL;
        tail = NULL;
    }
     
     // if there are many nodes............in LL.
    else 
    {
        Node* curr = head;
        while (curr->next != tail)
        {
            curr= curr->next;
          
        }

        curr->next = NULL;
        delete tail;
        tail = curr;

    }
}

void deletionAtKth_pos(Node* &head, Node* &tail, int k)
{
    // when k is equal to head..........
    if (k==0)
    {
        deletionAtHead(head, tail);
    }

    // when k is out of node ..........
    else if (k>= lengthOfLL(head))
    {
        deletionAtTail(head, tail);
    }

    // when delete a random position
    else 
    {
        Node* curr = head;
        for (int i=1; i<=k-1; i++)
        curr = curr->next;
        Node* nodetobedeleted = curr->next;
        curr->next = nodetobedeleted->next;
        delete nodetobedeleted;

    }
}

int getKthPos (Node* head, int k )
{
    for (int i=1; i<=k; i++)
    head = head->next;

    cout<< head->data;

}

// reverse of the LL..........

void reverseLL (Node* &head, Node* &tail)
{
    // LL is empty 
    if (head == NULL)
    {
        return;
    }

    else 
    {
        Node* curr = head;
        Node* prev = NULL;

        while (curr != NULL)
        {
            Node* save = curr->next;
            curr->next = prev;
            prev = curr;
            curr = save;
        }

        tail = head;
        head = prev;
    }
}

// ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
Node* reverseHelper (Node* head, Node* tail)
{
    // LL is empty or it's a single Node..................
    if (head == NULL || head->next == NULL)
    return head;

    // LL is non empty .........
    Node* shead = reverseHelper (head->next, tail);
    Node* curr = shead;

    while (curr->next != NULL)
    {
        /* code */
        curr = curr->next;
    }

    curr->next = head;
    head->next = NULL;

    tail = head;
    head = shead;


    return head;
    
}


void reverseLLrecursive (Node* &head, Node* &tail)
{
    Node* newhead = reverseHelper (head, tail);
    tail = head;
    head = newhead;
}
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

// find kth pos 
Node* getkthNodefromLL (Node* head, int k)
{
    Node* slow = head;
    Node* fast = head;

    /*
    move fast exactly k steps froward
    move fast and slow one one step ahead simultaneously 
    till the fast reches the NULL
    thw slow will be at exactly k steps behind fast
    i.e slow will beat k steps from the end
    return the slow Node
    */

   for (int i=1; i<=k; i++)
   fast = fast->next;

   while (fast != NULL)
   {
    slow = slow->next;
    fast = fast->next;
   }

   return slow;
}

// mid runner technique...........

Node* midrunner (Node* &head)
{
    Node* slow = head;
    Node* fast = head;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
}

// detect cycle ............

bool detectCycle (Node* &head)
{
    // LL is empty 
    Node* slow = head;
    Node* fast = head;

    while (fast != NULL && fast->next != NULL)
    {
        /* code */
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
        return true;
    }

    return false;
}

// how to create a cycle .........
   // (((((([  tail->next = head->next->next;   ]))))))))))

// how to remove the cycle.........

Node* detectCycle1 (Node* &head)
{
    // LL is empty 
    Node* slow = head;
    Node* fast = head;

    while (fast != NULL && fast->next != NULL)
    {
        /* code */
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
        return slow;
    }

    return NULL;
}
// comtinue.........

void removeCycle (Node* &head)
{
    Node* meetNode = detectCycle1 (head);
    Node* slow = head;
    Node* fast = meetNode;
    Node* prev = NULL;

    while (slow != fast)
    {
        slow = slow->next;
        prev = fast;
        fast = fast->next;
    }

    prev->next = NULL;
}



/*||||||||||||||||||||||||||||||||||||||||||||||  MAIN FUNCTION |||||||||||||||||||||||||||||||||||||||||||||*/


int main()
{
    Node* head = NULL;
    Node* tail =NULL;
    // Node* head = new Node(10);
    // cout<<head->data<<"\n";
    // cout<<head->next;

    // insertionAtHead(head, tail, 10); // 10-> NULL
    // insertionAtHead(head, tail, 20); // 20->10->N
    // insertionAtHead(head, tail, 30); // 30->20->10->N
    // insertionAtHead(head, tail, 40); // 40->30->20->10->N

    // display(head);
    // cout<<endl;


    //insertionAtTail(head, )

    // insertionattail (head, 10);
    // insertionattail (head, 20);
    // insertionattail (head, 30);

    insertionAtTail (head, tail, 10); //10->N
    insertionAtTail (head, tail, 20); // 10->20->N
    insertionAtTail (head, tail, 30); // 10->20->30->N
    insertionAtTail (head, tail, 40); // 10->20->30->40->N
    insertionAtTail (head, tail, 50);
    
    display(head) ;

    // Create a cycle with upper Node .......
    tail->next = head->next->next;

    // insertionAtKthposition (head, tail, 100, 1);

    // display(head);

    // cout<<"\n";

    // deletionAtHead(head, tail);
    // display(head);

    // cout<<endl;
    
    // deletionAtTail (head, tail);
    // display(head);

    // deletionAtKth_pos(head, tail, 2);
    // display(head);
    cout<<"\n";
    // getKthPos (head, 2);
    
    //     reverseLL(head, tail);
    //     display(head);
    // // cout<<"\n";
    // reverseLLrecursive (head, tail);
    // display(head);

    // Node* rec = getkthNodefromLL(head, 2);
    // cout<<"\n"<<rec->data;

    // Node* mid = midrunner(head);
    // cout<<mid->data;

    if (detectCycle(head))
    cout<<"true\n";

    else 
    cout<<"false\n";

    removeCycle(head);


    if (detectCycle1(head))
    cout<<"true\n";

    else 
    cout<<"false\n";

    display(head);

    
}


