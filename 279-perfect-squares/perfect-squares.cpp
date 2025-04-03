class Solution {
public:
    int numSquares(int n) {
        vector<int> dp(n + 1, INT_MAX);
        dp[0] = 0;
        for (int sq = 1; sq * sq <= n; sq++) {
            int square = sq * sq;
            for (int i = square; i <= n; i++) {
                dp[i] = min(dp[i], dp[i - square] + 1);
            }
        }
        return dp[n];
    }
};