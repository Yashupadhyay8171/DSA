/* Structure of Node
class Node {
  public:
    int data;
    Node *next;
    Node *prev;

    Node(int val) {
        data = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
*/

class Solution {
  public:
    // Function to delete a node at given position.
    int getlen(Node* head){
        Node* temp=head;
        int c=0;
        while(temp!=NULL){
            c++;
            temp=temp->next;
        }
        return c;
    }
    Node* deleteNode(Node* head, int x) {
        // Your code here
        int len=getlen(head);
        if(x==1){
             Node* temp=head;
             head=head->next;
             head->prev=NULL;
             temp->next=NULL;
             delete temp;
        }
        else if(len==x){
            Node* left=NULL;
            Node* right=head;
            while(right->next!=NULL){
                left=right;
                right=right->next;
            }
            left->next=NULL;
            right->prev=NULL;
            delete right;
        }
        else{
            Node* left=NULL;
            Node* right=head;
            while(x>1){
                left=right;
                right=right->next;
                x--;
            }
            left->next=right->next;
            right->next->prev=left;
            right->prev=NULL;
            right->next=NULL;
            delete right;
        }
        return head;
    }
};