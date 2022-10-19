#include<iostream>
using namespace std; 

class Node
{

public:
    int data;
    Node *next;
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

void insertAtHead(Node* &head, int d){
    //Creating a new node
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node* &tail, int d){
    //Creating a new node
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}


// Using Iterative

// void reverse(Node* &head){
//     if (head == NULL || head->next == NULL)
//     {
//         return;
//     }
//     Node *prev = NULL;
//     Node *curr = head;
//     Node *nxt = NULL;
//     while (curr!=NULL)
//     {
//         nxt = curr->next;
//         curr->next = prev;
//         prev = curr;
//         curr = nxt;
//     }
//     head = prev;
// }

// Using Recursion

void reverse(Node* &head, Node* curr, Node* prev)
{
    //Base Case
    if (curr == NULL){
        head = prev;
        return;
    }

    Node *nxt = curr->next;
    reverse(head, nxt, curr);
    curr->next = prev;
}


void print(Node* &head){
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    // cout << "NULL" << endl;
}

// Using recursion
// void print(Node* &head){
//     if (head == NULL)
//     {
//         return;
//     }
//     cout << head->data << " ";
//     print(head->next);
// }

int main()
{
        // Node *node1 = new Node(10);
        Node *head = NULL;

        insertAtHead(head, 9);
        insertAtHead(head, 8);
        insertAtHead(head, 7);
        insertAtHead(head, 6);
        print(head);
        

        cout<< endl;

        // cout<< endl;
        // reverse(head);
        // print(head);

        cout<< endl;
        Node *curr = head;
        Node *prev = NULL;
        reverse(head,curr,prev);
        print(head);
        

        return 0;
}
// Time Complexity: O(n) 
// Space Complexity: O(1)