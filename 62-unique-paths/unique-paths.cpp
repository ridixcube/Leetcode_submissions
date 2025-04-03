class Solution {
public:
    vector<vector<long long>> dp;
    long long f(int i, int j){
        if (dp[i][j]!=-1) return dp[i][j];
        if (i==0 || j==0 ) return dp[i][j]=1LL;
        return dp[i][j]=f(i-1, j)+f(i, j-1);
    }
    int uniquePaths(int m, int n) {
        dp.assign(m+1, vector(n+1, -1LL));
        return f(m-1, n-1);
    }
};