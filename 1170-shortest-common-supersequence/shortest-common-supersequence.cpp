class Solution {
public:
    string shortestCommonSupersequence(string str1, string str2) {
        int m = str1.size(), n = str2.size();
        vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));

        for (int i = 1; i <= m; i++)
            for (int j = 1; j <= n; j++)
                dp[i][j] = (str1[i - 1] == str2[j - 1] ? dp[i - 1][j - 1] + 1 : 
                max(dp[i - 1][j],dp[i][j - 1]));
        string res = "";
        int i = m, j = n;
        while(i > 0 || j > 0){
                    if (i > 0 && j > 0 && str1[i - 1] == str2[j - 1])
                        res += str1[--i], --j;
                    else if (i > 0 && (j == 0 || dp[i - 1][j] >= dp[i][j - 1]))
                        res += str1[--i];
                    else
                        res += str2[--j];
        }
        reverse(res.begin(), res.end());
        return res;
    }       
};