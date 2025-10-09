class Solution {
public:
    int solve(vector<int>& coins, int amount, vector<int>& dp) {
        if (amount < 0) return INT_MAX;
        if (amount == 0) return 0;
        if (dp[amount] != -1) return dp[amount]; // reuse result

        int mini = INT_MAX;
        for (int coin : coins) {
            int rec = solve(coins, amount - coin, dp);
            if (rec != INT_MAX) {
                mini = min(mini, 1 + rec);
            }
        }

        return dp[amount] = mini;
    }

    int coinChange(vector<int>& coins, int amount) {
        vector<int> dp(amount + 1, -1);
        int res = solve(coins, amount, dp);
        return (res == INT_MAX) ? -1 : res;
    }
};
