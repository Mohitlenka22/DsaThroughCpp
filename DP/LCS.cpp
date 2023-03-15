#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int longestCommonSubsequence(string text1, string text2)
    {
        int m = text1.length();
        int n = text2.length();
        vector<vector<int>> dp(m + 1, vector<int>(n + 1, -1));
        return lcs(text1, text2, m, n, dp);
    }
    int lcs(const string &s1, const string &s2, int m, int n, vector<vector<int>> &dp)
    {
        if (m == 0 || n == 0)
            return 0;
        if (s1[m - 1] == s2[n - 1])
            dp[m][n] = 1 + lcs(s1, s2, m - 1, n - 1, dp);
        if (dp[m][n] != -1)
            return dp[m][n];
        return dp[m][n] = max(lcs(s1, s2, m - 1, n, dp), lcs(s1, s2, m, n - 1, dp));
    }
};