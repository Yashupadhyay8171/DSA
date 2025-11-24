/*

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
  void solve(Node* & head,int &carry){
      if(head==NULL){
          return;
      }
      solve(head->next,carry);
      int sum=head->data+carry;
      head->data=sum%10;
      carry=sum/10;
      return;
  }
    Node* addOne(Node* head) {
        // Your Code here
        int carry=1;
        solve(head,carry);
        // return head of list after adding one
        if(carry>0){
            Node *temp=new Node(carry);
            temp->next=head;
            return temp;
        }
        return head;
    }
};