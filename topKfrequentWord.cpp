#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<string, int> &p1, pair<string, int> &p2)
{
    if (p1.second == p2.second)
        return p1.first < p2.first;

    return p1.second > p2.second;
}

vector<string> topKFrequent(vector<string> &words, int k)
{
    unordered_map<string, int> mp;
    for (auto i : words)
        mp[i]++;
    vector<pair<string, int>> A;
    for (auto it : mp)
        A.push_back(it);
    sort(A.begin(), A.end(), cmp);
    int c = 0;
    vector<string> ans;
    for (auto it : A)
    {
        if (c == k)
            break;
        ans.push_back(it.first);
        c++;
    }
    // sort(ans.begin(), ans.end());
    return ans;
}

int main()
{
    vector<string> v = {"i", "love", "leetcode", "i", "love", "coding"};
    int k = 2;
    vector<string> ans = topKFrequent(v, k);
    for (auto i : ans)
        cout << i << endl;
    return 0;
}