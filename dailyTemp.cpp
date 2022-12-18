#include <bits/stdc++.h>
using namespace std;

vector<int> dailyTemperatures(vector<int> &arr)
{
    int n = arr.size();
    vector<int> ans(n, 0);
    for (int i = 0; i < n; i++)
    {
        int cnt = 1;
        for (int j = i + 1; j < n; j++)
        {

            if (arr[j] > arr[i])
            {
                ans[i] = cnt;
                break;
            }
            cnt++;
        }
    }
    return ans;
}

int main()
{
    vector<int> v = {73, 74, 75, 71, 69, 72, 76, 73};
    vector<int> ans = dailyTemperatures(v);
    for (auto i : ans)
        cout << i << " ";
    return 0;
}