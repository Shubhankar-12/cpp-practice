#include <bits/stdc++.h>
using namespace std;

int help(vector<vector<int>> &arr, int r, int c)
{
    int n = arr.size();
    if (r == n - 1)
        return arr[r][c];
}

int minFallingPathSum(vector<vector<int>> &arr)
{
    int ans = INT_MAX;
    for (int i = 0; i < arr.size(); i++)
    {
        ans = min(ans, help(arr, 0, i));
    }
    return ans;
}

int main()
{

    return 0;
}