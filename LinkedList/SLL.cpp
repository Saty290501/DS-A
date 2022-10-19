
// Insertion/Deletion/reverse/Display

#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *next;
    
    //Constructor
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};
void insertAtHead(Node* &head, int val){
    // new node create
    Node* temp = new Node(val);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node* &tail, int val){
    // new node create
    Node *temp = new Node(val);
    tail->next = temp;
    tail = temp;

    // if(tail==NULL){
    //     tail = n;
    //     return;
    // }

    // node *temp = tail;
    // while (temp->next!=NULL)
    // {
    //     temp = temp->next;
    // }
    // temp->next = n;
}

void insertatposition(Node* &head, Node* &tail, int position, int d){
    // insert at start
    if (position == 1)
    {
        insertAtHead(head, d);
        return;
    }
    
    Node *temp = head;
    int cnt = 1;
    while (cnt<position-1)
    {
        temp = temp->next;
        cnt++;
    }

    if (temp->next==NULL)
    {
        insertAtTail(tail, d);
        return;
    }

    Node *nodetoinsert = new Node(d);
    nodetoinsert->next = temp->next;
    temp->next = nodetoinsert;
}

void Display(Node* &head){
    Node *temp = head;
    while(temp!=NULL){
        cout << temp->data << "->";
        temp = temp->next;
    }
    // cout << "NULL" << endl;
}

// Using recursion  
// void Display(Node* &head){
//     if (head == NULL)
//     {
//         return;
//     }
//     cout << head->data << " ";
//     print(head->next);
// }

bool search(Node* head, int key){
    Node* temp = head;
    while (temp!=NULL)
    {
        if (temp->data==key)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}
void deleteAthead(Node* &head){
    Node *todelete = head;
    head = head->next;

    delete todelete;
}

void deletion(Node* &head, int val){
    if (head==NULL)
    {
        return;
    }
    if (head->next==NULL)
    {
        deleteAthead(head);
        return;
    }  
    Node *temp = head;
    while(temp->next->data!=val){
        temp = temp->next;
    }
    Node* todelete = temp->next;
    temp->next = temp->next->next;

    delete todelete;  
}

void reverse(Node* &head){
    if (head == NULL || head->next == NULL)
    {
        return;
    }
    Node *prev = NULL;
    Node *curr = head;
    Node *nxt = NULL;
    while (curr!=NULL)
    {
        nxt = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nxt;
    }
    head = prev;
}


int main(){

    Node* node1 = new Node(0);

    Node *head = node1;
    insertAtHead(head, 11);
    insertAtHead(head, 12);
    insertAtHead(head, 13);
    insertAtHead(head, 14);
    insertAtHead(head, 15);
    Display(head);

    cout << endl;

    Node* tail = node1;
    insertAtTail(tail, 1);
    // insertAtTail(tail, 2);
    // insertAtTail(tail, 3);
    // insertAtTail(tail, 4);
    // insertAtTail(tail, 5);
    // insertAtTail(tail, 6); 
    Display(head);
    cout << endl;

    cout << "Insert 23 at Position 4 is ";
    insertatposition(head, tail, 4, 23);
    Display(head);
    cout << endl;

    cout << "Insert 0 at Position 1 is ";
    insertatposition(head, tail, 1, 0);
    Display(head);
    cout << endl;

    cout << "Insert 32 at Position 10 is ";
    insertatposition(head, tail, 10, 32);
    Display(head);
    cout << endl;

    cout << "Head " << head->data << endl;
    cout << "Tail " << tail->data << endl;

    deletion(head, 0);
    Display(head);

    cout<<endl << "Tail " << tail->data << endl;

    
    cout << "reverse: ";
    reverse(head);
    Display(head);
    /*

    cout <<"Search: "<< search(head, 3)<<endl;
    cout << "Search: "<<search(head, 9)<<endl;

    deletion(head, 3);
    cout << "delete 3 element: ";
    Display(head);
    deleteAthead(head);
    cout << "delete at head: ";
    Display(head);
    */
    return 0;
}