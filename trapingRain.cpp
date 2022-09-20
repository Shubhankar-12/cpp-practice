#include <bits/stdc++.h>
using namespace std;

int trap(vector<int> &v)
{
    int n = v.size();
    stack<int> st;
    int rn = 0;
    for (int i = 0; i < n; i++)
    {
        while (!st.empty() && v[st.top()] < v[i])
        {
            int nw = st.top();
            st.pop();
            if (st.empty())
                break;
            int sub = i - st.top() - 1;
            rn += (min(v[st.top()], v[i]) - v[nw]) * sub;
        }
        st.push(i);
    }
    return rn;
}

int main()
{

    return 0;
}