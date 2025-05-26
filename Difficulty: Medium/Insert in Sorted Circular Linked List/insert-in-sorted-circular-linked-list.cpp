/* structure for a node
class Node {
 public:
  int data;
  Node *next;

  Node(int x){
      data = x;
      next = NULL;
  }
}; */

class Solution {
  public:
    Node* sortedInsert(Node* head, int data) {
        // code here
        Node* newnode=new Node(data);
        if(head->data > newnode->data){
            newnode->next=head;
            Node* temp=head;
            while(temp->next!=head){
                temp=temp->next;
            }
            temp->next=newnode;
            return newnode;
        }
        Node* temp=head->next;
        Node* prev=head;
        while(temp!=head){
            if(temp->data >= newnode->data){
                prev->next=newnode;
                newnode->next=temp;
                return head;
            }
            prev=temp;
            temp=temp->next;
        }
        prev->next=newnode;
        newnode->next=temp;
        return head;
    }
};