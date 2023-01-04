#include <bits/stdc++.h>
using namespace std;

int minimumRounds(vector<int> &arr)
{
    unordered_map<int, int> mp;
    for (auto i : arr)
        mp[i]++;
    int ans = 0;
    for (auto i : mp)
    {
        if (i.second == 1)
            return -1;
        if (i.second % 3 == 0)
            ans += i.second / 3;
        else
            ans += i.second / 3 + 1;
    }
    return ans;
}

int main()
{
    vector<int> arr = {2, 2, 3, 3, 2, 4, 4, 4, 4, 4};
    cout << minimumRounds(arr) << endl;
    return 0;
}