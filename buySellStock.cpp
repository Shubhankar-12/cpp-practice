#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &prices, int n, int i, int j, vector<vector<int>> &dp)
{

    if (i >= n || j >= n || i > j)
        return 0;
    // cout<<i<<" "<<j<<" "<<dp[i][j]<<endl;
    if (dp[i][j] != -1)
        return dp[i][j];
    int take = 0;
    if (prices[j] >= prices[i])
        take = (prices[j] - prices[i]) + solve(prices, n, j + 2, j + 3, dp);
    int no = solve(prices, n, i + 1, j, dp);
    int no_take = solve(prices, n, i, j + 1, dp);
    return dp[i][j] = max(max(take, no), no_take);
}
int maxProfit(vector<int> &prices)
{
    int n = prices.size();
    vector<vector<int>> dp(n + 2, vector<int>(n + 2, -1));
    return solve(prices, n, 0, 0, dp);
}

int main()
{
    vector<int> arr = {1, 2, 3, 0, 2};
    return 0;
}