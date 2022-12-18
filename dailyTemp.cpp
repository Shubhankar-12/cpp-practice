#include <bits/stdc++.h>
using namespace std;

vector<int> dailyTemperaturesBrt(vector<int> &arr)
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

vector<int> dailyTemperatures(vector<int> &arr)
{
    stack<int> st;
    int n = arr.size();
    vector<int> ans(n, 0);

    st.push(0);
    for (int i = 1; i < arr.size(); i++)
    {
        while (!st.empty() && arr[i] > arr[st.top()])
        {
            ans[st.top()] = i - st.top();
            st.pop();
        }
        st.push(i);
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