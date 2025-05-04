/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int getlen(ListNode* head){
        ListNode* temp=head;
        int c=0;
        while(temp!=NULL){
            c++;
            temp=temp->next;
        }
        return c;
    }
    void solve(ListNode* &prev,ListNode* &curr,int &n){
        if(curr==NULL){
            return;
        }
        solve(curr,curr->next,n);
        if(n==1){
            prev->next=curr->next;
        }
        n--;
        return;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int len=getlen(head);
        len-=n;
        if(len==0){
            return head->next;
        }
        ListNode* prev=NULL;
        ListNode* curr=head;
        solve(prev,curr,n);
        return head;
    }
};