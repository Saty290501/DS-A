
// Insertion/Deletion/reverse/Display

#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *next;
        Node *prev;
        
        Node(int val)
        {
            data = val;
            next = NULL;
            prev = NULL;
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


void deleteAtHead(Node* &head){
    Node *todelete = head;
    head = head->next;
    head->prev = NULL;

    delete todelete;
}

void Deletion(Node* &head, int pos){

    if (pos==1)
    {
        deleteAtHead(head);
        return;
    }
    
    Node *temp = head;
    int count = 1;
    while (temp!=NULL && count!=pos)
    {
        temp = temp->next;
        count++;
    }
    temp->prev->next = temp->next;
    if (temp->next!=NULL)
    {
        temp->next->prev = temp->prev;

    }

    delete temp;
}

void print(Node* head){
    Node *temp = head;
    while (temp!=NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL"<< endl;
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

    Deletion(head, 5);
    print(head);

}