#include <bits/stdc++.h>
using namespace std;

int minDeletionSize(vector<string> &strs)
{
    int cnt = 0;
    for (int i = 0; i < strs.size(); i++)
    {
        for (int j = 0; j < strs[i].size() - 1; j++)
        {
            if ((int)strs[j + 1][i] < (int)strs[j][i])
            {
                cnt++;
                break;
            }
        }
    }
    return cnt;
}

int main()
{
    vector<string> strs = {"a", "b", "c"};
    cout << minDeletionSize(strs);
    return 0;
}