/*

struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution {
  public:
int getlen(Node* head){
    Node* temp=head;
    int c=0;
    while(temp!=NULL){
        c++;
        temp=temp->next;
    } 
    return c;
}
    Node* rotate(Node* head, int k) {
    if(head==NULL) return head;
        int len=getlen(head);
        k=(k%len);
    if(k==0) return head;
    Node*it=head;
    for(int i=0;i<k-1;i++){
        it=it->next;
    }
    Node* newhead=it->next;
        it->next=NULL;
    Node* temp=newhead;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=head;
    return newhead;
    }
};