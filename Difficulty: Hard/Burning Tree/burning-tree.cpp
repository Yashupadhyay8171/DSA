//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

class Node {
  public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

Node *buildTree(string str) {
    // Corner Case
    if (str.length() == 0 || str[0] == 'N')
        return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;)
        ip.push_back(str);

    // Create the root of the tree
    Node *root = new Node(stoi(ip[0]));

    // Push the root to the queue
    queue<Node *> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node *currNode = queue.front();
        queue.pop();

        // Get the current Node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N") {

            // Create the left child for the current Node
            currNode->left = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size())
            break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N") {

            // Create the right child for the current Node
            currNode->right = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}


// } Driver Code Ends

/*
class Node {
  public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution {
  public:
    int cnt = 0;

    void findMaxNodeValue(Node* root) {
        if (root == NULL) return;
        cnt = max(cnt, root->data);
        findMaxNodeValue(root->left);
        findMaxNodeValue(root->right);
    }

    void buildGraph(Node* root, int parent, vector<vector<int>>& adj) {
        if (root == NULL) return;

        if (parent != -1) {
            adj[root->data].push_back(parent);
            adj[parent].push_back(root->data);
        }

        buildGraph(root->left, root->data, adj);
        buildGraph(root->right, root->data, adj);
    }

    int minTime(Node* root, int target) {
        findMaxNodeValue(root);
        int n = cnt + 1;
        vector<vector<int>> adj(n);
        buildGraph(root, -1, adj);

        vector<int> vis(n, 0);
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        pq.push({0, target});
        vis[target] = 1;

        int maxTime = 0;

        while (!pq.empty()) {
            int time = pq.top().first;
            int node = pq.top().second;
            pq.pop();

            maxTime = time;

            for (int neighbor : adj[node]) {
                if (!vis[neighbor]) {
                    vis[neighbor] = 1;
                    pq.push({time + 1, neighbor});
                }
            }
        }

        return maxTime;
    }
};


//{ Driver Code Starts.

int main() {
    int tc;
    scanf("%d ", &tc);
    while (tc--) {
        string treeString;
        getline(cin, treeString);
        // cout<<treeString<<"\n";
        int target;
        cin >> target;
        // cout<<target<<"\n";

        Node *root = buildTree(treeString);
        Solution obj;
        cout << obj.minTime(root, target) << "\n";

        cin.ignore();

        cout << "~"
             << "\n";
    }

    return 0;
}

// } Driver Code Ends