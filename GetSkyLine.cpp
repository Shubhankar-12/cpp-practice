#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> getSkyline(vector<vector<int>> &buildings)
{
    vector<vector<int>> res;
    int cur = 0, X, H = -1, N = buildings.size();
    priority_queue<pair<int, int>> liveBlg;
    while (cur < N || !liveBlg.empty())
    {
        X = liveBlg.empty() ? buildings[cur][0] : liveBlg.top().second;

        if (cur >= N || buildings[cur][0] > X)
        {
            while (!liveBlg.empty() && (liveBlg.top().second <= X))
                liveBlg.pop();
        }
        else
        {
            X = buildings[cur][0];
            while (cur < N && buildings[cur][0] == X)
            {
                liveBlg.push(make_pair(buildings[cur][2], buildings[cur][1]));
                cur++;
            }
        }
        H = liveBlg.empty() ? 0 : liveBlg.top().first;
        if (res.empty() || (res.back()[1] != H))
            res.push_back({X, H});
    }
    return res;
}
int main()
{

    return 0;
}