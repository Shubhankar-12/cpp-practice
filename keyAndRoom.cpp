#include <bits/stdc++.h>
using namespace std;

bool canVisitAllRooms(vector<vector<int>> &rooms)
{
    unordered_map<int, vector<int>> mp;
    int n = rooms.size();
    for (int i = 0; i < n; i++)
    {
        mp[i] = rooms[i];
    }
    for (int i = 1; i < n; i++)
    {
        bool dekh = 0;
        for (int j = 0; j < n; j++)
        {
            if (j != i)
            {
            }
        }
    }
}

int main()
{
    vector<vector<int>> ans = {{1}, {2}, {3}, {0}};
    cout << canVisitAllRooms(ans);
    return 0;
}