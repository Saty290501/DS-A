#include<iostream>
using namespace std;

class node{
    public:
        int data;
        node *next;
    
    node(int val){
        data = val;
        next = NULL;
    }
};

void insertAtTail(node* &head, int val){
    node *n = new node(val);

    if(head==NULL){
        head = n;
        return;
    }

    head->next = n;
    head = n;
}

void Display(node* head){
    node *temp = head;
    while(temp!=NULL){
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

void makecycle(node* &head, int pos){
    node *temp = head;
    node* startnode;

    int count = 1;
    while (temp->next!=NULL)
    {
        if(count==pos){
            startnode = temp;
        }
        temp = temp->next;
        count++;
    }
    temp->next = startnode;
}

bool detectcycle(node* &head){
    node *slow = head;
    node *fast = head;

    while(fast!=NULL && fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
        
        if(fast==slow){
            return true;
        }
    }
    return false;
}

void removecycle(node* &head){
    node *slow = head;
    node *fast = head;

    while (slow!=NULL && fast!=NULL && fast->next!=NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        
        if(fast==slow)
        {
            break;
        }
    }
// otherwisw u can use do while loop to reach upto the equal position

    // do
    // {
    //     slow = slow->next;
    //     fast = fast->next->next;

    // } while (slow!=fast);

    if (slow==head)  // if loop found at head position
    {
        while (fast->next!=slow)
        {
            fast = fast->next;
        }
        fast->next = NULL;
    }

    else if (slow==fast)
    {
        slow = head; // u can also point to the fast
        while (slow->next!=fast->next)
        {
            slow = slow->next;
            fast = fast->next;
        }
        fast->next = NULL;
    }
    
    

    // fast = head;   // if we point to the head then we find some error so we use above method to resolve it
    // while (slow->next!=fast->next)
    // {
    //     slow = slow->next;
    //     fast = fast->next;
    // }
    // slow->next = NULL;
}


int main()
{
    node *head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    insertAtTail(head, 6);
    insertAtTail(head, 7);
    insertAtTail(head, 8);
    Display(head);
    makecycle(head, 2);
    // Display(head);
    cout << "detectcycle " << detectcycle(head) << endl;
    removecycle(head);
    cout << "detectcycle " << detectcycle(head) << endl;
    Display(head);
}