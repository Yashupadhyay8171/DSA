// User function Template for C++

/*class Node {
public:
    int data;
    Node* next;

    // Default constructor
    Node()
    {
        data = 0;
        next = NULL;
    }

    // Parameterised Constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};*/

class Solution {
  public:
    Node* constructLL(vector<int>& arr) {
        // code here
        Node* head=NULL;
        Node* temp=new Node(-1);
        head=temp;
        for(auto it:arr){
            Node* newnode=new Node(it);
            temp->next=newnode;
            temp=newnode;
        }
        return head->next;
    }
};