#include <bits/stdc++.h>
using namespace std;

int minCost(string colors, vector<int> &neededTime)
{
    int ans = 0, maxCost = 0;
    for (int i = 0; i < colors.length(); ++i)
    {
        if (i > 0 && colors[i] != colors[i - 1])
            maxCost = 0;
        ans += min(maxCost, neededTime[i]);
        maxCost = max(maxCost, neededTime[i]);
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