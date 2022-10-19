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

    node *temp = head;
    while (temp->next!=NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

void Display(node* head){
    node *temp = head;
    while(temp!=NULL){
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

struct node* reversek(struct node* &head, int k){
    node *previous = NULL;
    node *current = head;
    node *nxt;

    int count = 0;
    while (current!=NULL && count<k)
    {
        nxt = current->next;
        current->next = previous;
        previous = current;
        current = nxt;
        count++; 

    }
    if(nxt!=NULL)
    {
    head->next = reversek(nxt, k);
    }
    return previous;
}

int main(){
    node *head = NULL;
    insertAtTail(head, 6);
    insertAtTail(head, 8);
    insertAtTail(head, 9);
    insertAtTail(head, 4);
    Display(head);
    int k = 2;
    node *newhead = reversek(head, k);
    Display(newhead);
}