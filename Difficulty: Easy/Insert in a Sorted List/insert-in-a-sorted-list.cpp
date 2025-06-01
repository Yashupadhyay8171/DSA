/*
structure of the node of the list is as
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    // Should return head of the modified linked list
    Node* sortedInsert(Node* head, int key) {
        // Code here
        if(head->data > key){
            Node* newnode=new Node(key);
            newnode->next=head;
            return newnode;
        }
        Node* temp=head;
        Node* prev=NULL;
        while(temp->next!=NULL && temp->data <= key){
            prev=temp;
            temp=temp->next;
        }
        if(temp->data <= key){
            Node* newnode=new Node(key);
            temp->next=newnode;
            return head;
        }
        Node* newnode=new Node(key);
        prev->next=newnode;
        newnode->next=temp;
        return head;
    }
};