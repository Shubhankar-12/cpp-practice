#include <bits/stdc++.h>
using namespace std;

int LCS(string s1, string s2, vector<vector<int>> &dp)
{
    int n = s1.size(), m = s2.size();
    if (s1 == "" || s2 == "")
        return 0;
    if (dp[n][m] != -1)
        return dp[n][m];
    if (s1[0] == s2[0])
        dp[n][m] = 1 + LCS(s1.substr(1), s2.substr(1), dp);
    else
    {
        int t1 = LCS(s1, s2.substr(1), dp);
        int t2 = LCS(s1.substr(1), s2, dp);
        dp[n][m] = max(t1, t2);
    }
    return dp[n][m];
}

int longestCommonSubsequence1(string s1, string s2)
{
    int n = s1.size(), m = s2.size();
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, -1));
    return LCS(s1, s2, dp);
}

int longestCommonSubsequence(string s1, string s2)
{
    int n = s1.size(), m = s2.size();
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (s1[n - i] == s2[m - j])
                dp[i][j] = 1 + dp[i - 1][j - 1];
            else
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }
    return dp[n][m];
}

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    cout << longestCommonSubsequence(s1, s2);
    return 0;
}