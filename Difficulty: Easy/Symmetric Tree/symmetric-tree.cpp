/*
class Node {
public:
    int data;
    Node *left, *right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/
class Solution {
  public:
    bool find(Node* first,Node* second){
        if(!first && !second){
            return true;
        }
        if(first && !second){
            return false;
        }
        else if(!first && second){
            return false;
        }
        else if(first->data != second->data){
            return false;
        }
        bool left = find(first->left,second->right);
        bool right= find(first->right,second->left);
        return left && right;
    }
    bool isSymmetric(Node* root) {
        // Code here
        return find(root->left,root->right);
    }
};