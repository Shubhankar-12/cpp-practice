#include <bits/stdc++.h>
using namespace std;

int minCost(vector<int> &aur, int k)
{

    unordered_map<int, int> dekh;
    for (int iu : aur)
    {

        dekh[iu]++;
    }

    vector<int> jl(aur.size() + 1);
    for (int i = 1; i < aur.size(); i++)
    {
        int cost = INT_MAX;
        for (int j = 0; j < i; j++)
        {
            if (dekh[aur[j]] > 1)
            {
                cost = min(cost, jl[j] + +i - j);
            }
        }
        jl[i] = cost;
    }
    return jl[aur.size()];
}

int main()
{

    return 0;
}