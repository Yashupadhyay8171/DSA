class Solution {

public:
    int snakesAndLadders(vector<vector<int>>& board) {
        
        unordered_map<int,int> mp;
        int cnt = 1;
        int n = board.size();

        bool flip = false;
        for(int i = n - 1; i >= 0; i--) {

            if(!flip) {
                for(int j = 0; j < n; j++) {
                    mp[cnt++] = board[i][j];
                }
            } 
            else {
                for(int j = n - 1; j >= 0; j--) {
                    mp[cnt++] = board[i][j];
                }
            }

            flip = !flip;
        }

        int currRoll = 0;
        int maxNode = n * n;
        queue<pair<int,int>> q;
        q.push({1, 0});

        vector<int> vis(maxNode + 1, 0);
        vis[1] = 1;

        while(!q.empty()) {

            auto [currNode, currRoll] = q.front();
            q.pop();

            if(currNode == maxNode) {
                return currRoll;
            }

            for (int i = currNode + 1; i <= min(currNode + 6, maxNode); i++) {
                int dest = (mp[i] != -1) ? mp[i] : i;

                if (vis[dest]) continue;

                vis[dest] = 1;
                q.push({dest, currRoll + 1});
            }

        }

        return -1;
    }
};