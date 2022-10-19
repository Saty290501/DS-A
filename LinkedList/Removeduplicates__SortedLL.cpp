#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *next;
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};


void insertathead(Node* &head,int val){
    Node *temp = new Node(val);
    temp->next = head;
    head = temp;
}
void insertAtTail(Node* &tail, int val){
    // new node create
    Node *temp = new Node(val);
    tail->next = temp;
    tail = temp;
}
void removeduplicates_sortedLL(Node* &tail){
    Node *curr = tail;
    while (curr!=NULL)
    {
        if ((curr->next!=NULL) && curr->data==curr->next->data)
        {
            Node *next_next = curr->next->next;
            Node *nodetodelete = curr->next;
            delete (nodetodelete);
            curr->next = next_next;
        }
        else{
            curr = curr->next;
        }
        
        
    }
    
}
void Display(Node* &tail){
    Node *temp = tail;
    while(temp!=NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    // cout << "NULL" << endl;
}
int main(){
    Node *node1 = new Node(10);
    Node *tail = node1;
    insertAtTail(tail, 10);
    insertAtTail(tail, 11);
    insertAtTail(tail, 11);
    insertAtTail(tail, 11);
    insertAtTail(tail, 12);
    insertAtTail(tail, 13);
    insertAtTail(tail, 13);

    Node *head = node1;
    Display(head);
    cout << endl;
    removeduplicates_sortedLL(head);
    Display(head);
    return 0;
}

// T.C = O(nlogn)
// S.C = O(1)


