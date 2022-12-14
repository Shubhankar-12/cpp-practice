#include <bits/stdc++.h>
using namespace std;

int help(vector<vector<int>> &arr, int r, int c)
{
    int n = arr.size();
    if (r == n - 1)
        return arr[r][c];
    int minn = INT_MAX;
    for (int i = -1; i <= 1; i++)
    {
        if (c + i >= 0 && c + i < n)
            minn = min(minn, arr[r][c] + help(arr, r + 1, c + i));
    }
    return minn;
}

int minFallingPathSum(vector<vector<int>> &arr)
{
    int ans = INT_MAX;
    for (int i = 0; i < arr[0].size(); i++)
    {
        ans = min(ans, help(arr, 0, i));
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
    cout << minFallingPathSum(arr);
    return 0;
}