class Solution {
public:
    array<int,26> f = {0};
    int dis(int k){
        int N = f['N'-'A'] , S = f['S'-'A'] , E = f['E'-'A'] , W = f['W'-'A'];
        int x = min({N , S , k}) , y = min({E,W,k-x});
        return abs(N-S)+2*x + abs(E-W)+2*y;
    }
    int maxDistance(string s, int k) {
        int ans = 0;
        for(char c : s){
            f[c-'A'] += 1;
            ans = max(ans , dis(k));
        }
        return ans;
    }
};