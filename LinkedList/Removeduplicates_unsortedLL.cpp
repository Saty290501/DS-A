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

void removeduplicates_unsortedLL(Node* &tail){
    Node *curr = tail;
    while (curr!=NULL)
    {
        Node *temp = curr;
        while (temp!=NULL)
        {
            if ((temp->next!=NULL) && curr->data==temp->next->data)
            {
            Node *next_next = temp->next->next;
            Node *nodetodelete = temp->next;
            delete (nodetodelete);
            temp->next = next_next;
            }
            else{
            temp = temp->next;
            }
        }
        curr = curr->next;
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
    Node *node1 = new Node(20);
    Node *tail = node1;
    insertAtTail(tail, 10);
    insertAtTail(tail, 9);
    insertAtTail(tail, 50);
    insertAtTail(tail, 11);
    insertAtTail(tail, 9);
    insertAtTail(tail, 10);
    insertAtTail(tail, 20);

    Node *head = node1;
    Display(head);
    cout << endl;
    removeduplicates_unsortedLL(head);
    Display(head);
    return 0;
}

// T.C = O(n^2)
// S.C = O(1)

// T.C = O(nlogn) if we first sort
// S.C = O(1)


