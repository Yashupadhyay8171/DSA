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
    int find(ListNode* head){
        int c=0;
        while(head!=NULL){
            c++;
            head=head->next;
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
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* prev=NULL;
        ListNode* curr=head;
        if(curr->next == NULL && n==1){
            return nullptr;
        }
        else if(find(head)==n){
            return curr->next;
        }
        solve(prev,curr,n);
        return head;
    }
};