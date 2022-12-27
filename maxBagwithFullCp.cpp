#include <bits/stdc++.h>
using namespace std;

int maximumBags(vector<int> &cap, vector<int> &rc, int x)
{
    vector<int> hold;
    for (int i = 0; i < cap.size(); i++)
    {
        hold.push_back(cap[i] - rc[i]);
    }
    sort(hold.begin(), hold.end());
    int i = 0;
    while (i < rc.size())
        if (hold[i] == 0)
            i++;
    while (i < rc.size())
    {
        if (hold[i] - x < 0)
            return i;
        x -= hold[i];
        i++;
    }
    return i;
}

int main()
{

    return 0;
}