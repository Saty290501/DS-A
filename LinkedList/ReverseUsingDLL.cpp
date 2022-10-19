#include<iostream>
using namespace std;


class Node{
    public:
        int data;
        Node *prev;
        Node *next;
        Node(int data){
            this->data = data;
            this->prev = NULL;
            this->next = NULL;
        }
};

void insertAthead(Node* &head, int d){
    Node *temp = new Node(d);
    temp->next = head;
    head->prev = temp;
    head = temp;
}

void insertAttail(Node* &tail, int d){
    Node *temp = new Node(d);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}

void reverse(Node* &head){
    // Node *temp = NULL;
    // Node *curr = head;

    // while (curr!=NULL)
    // {
    //     temp = curr->prev;
    //     curr->prev = curr->next;
    //     curr->next = temp;
    //     curr = curr->prev;
    // }

    // head = temp->prev;

    Node *curr=head;
    Node *prev=NULL;
    Node *forward=NULL;
    
    while(curr!=NULL){
        forward=curr->next;
        curr->prev=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
    }
    head = prev;
}

void print(Node* &head){
    Node *temp = head;
    while (temp!=NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    
}

int main(){
    Node *node1 = new Node(10);
    Node *head = node1;
    insertAthead(head, 5);
    insertAthead(head, 4);
    insertAthead(head, 3);
    print(head);
    cout << endl;

    Node *tail = node1;

    insertAttail(tail, 15);
    insertAttail(tail, 16);
    insertAttail(tail, 17);
    insertAttail(tail, 18);
    print(head);

    cout << endl;

    reverse(head);
    print(head);

    return 0;
}