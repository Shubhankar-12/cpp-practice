#include <bits/stdc++.h>
using namespace std;

int help(vector<vector<int>> &arr, int r, int c, vector<vector<int>> &dp)
{
    int n = arr.size();
    if (r == n - 1)
        return arr[r][c];
    if (dp[r][c] != -1)
        return dp[r][c];
    int minn = INT_MAX;
    for (int i = -1; i <= 1; i++)
    {
        if (c + i >= 0 && c + i < n)
            minn = min(minn, arr[r][c] + help(arr, r + 1, c + i, dp));
    }
    return dp[r][c] = minn;
}

int minFallingPathSum(vector<vector<int>> &arr)
{
    int ans = INT_MAX;
    int n = arr.size();
    vector<vector<int>> dp(n, vector<int>(n, -1));
    for (int i = 0; i < n; i++)
    {
        ans = min(ans, help(arr, 0, i, dp));
    }
    return ans;
}

int minFallingPathSumDp(vector<vector<int>> &arr)
{
    int n = arr.size();
    if (n == 0)
        return 0;
    vector<vector<int>> dp(n, vector<int>(n));
    dp[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            dp[i][j] += arr[i - 1][j];
            if (j > 0)
                dp[i][j] += min(dp[i][j], arr[i - 1][j - 1]);
            if (j < n - 1)
                dp[i][j] += min(dp[i][j], arr[i - 1][j + 1]);
        }
    }
    int ans = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        ans = min(ans, dp[0][i]);
    }

    return ans;
}

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> arr(n, vector<int>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << minFallingPathSumDp(arr);
    return 0;
}