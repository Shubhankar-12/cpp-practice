#include <bits/stdc++.h>
using namespace std;

int minCost(string colors, vector<int> &neededTime)
{
    int ans = 0;
    for (int i = 0; i < colors.length() - 1; i++)
    {
        if (colors[i + 1] == colors[i])
        {
            // cout << i << " ";
            ans += min(neededTime[i], neededTime[i + 1]);
        }
    }
    return ans;
}

int main()
{
    string s;
    cin >> s;
    vector<int> v;
    for (int i = 0; i < s.length(); i++)
    {
        int t;
        cin >> t;
        v.push_back(t);
    }
    cout << minCost(s, v) << endl;
    return 0;
}