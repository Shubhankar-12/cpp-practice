#include <bits/stdc++.h>
using namespace std;

int findLength(vector<int> &v1, vector<int> &v2)
{
    int s1 = v1.size(), s2 = v2.size();
    if (!s1 || !s2)
        return 0;
    vector<int> dp(s2 + 1);
    int ans = 0;
    for (int i = s1 - 1; i >= 0; i--)
    {
        for (int j = 0; j < s2; j++)
        {
            ans = max(ans, dp[j] = v1[i] == v2[j] ? 1 + dp[j + 1] : 0);
        }
    }
    return ans;
}

int main()
{
    int n1, n2;
    cin >> n1 >> n2;
    vector<int> v1, v2;
    for (int i = 0; i < n1; i++)
    {
        int t;
        cin >> t;
        v1.push_back(t);
    }
    for (int i = 0; i < n2; i++)
    {
        int t;
        cin >> t;
        v2.push_back(t);
    }
    cout << findLength(v1, v2) << endl;
    return 0;
}