/*
structure of linked list node:

struct Node
{
    int data;
    Node* next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

*/

class Solution {
  public:
    // Function to remove a loop in the linked list.
    void removeLoop(Node* head) {
        // code here
        Node* slow=head;
        Node* fast=head;
        while(fast!=NULL){
            fast=fast->next;
            if(fast!=NULL){
                fast=fast->next;
                slow=slow->next;
            }
            if(slow==fast){
                slow=head;
                break;
            }
        }
        if(fast==NULL){
            return;
        }
        while(slow!=fast){
            slow=slow->next;
            fast=fast->next;
        }
        Node* temp=slow;
        while(temp->next!=slow){
            temp=temp->next;
        }
        temp->next=NULL;
        return;
    }
};