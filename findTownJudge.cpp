#include <bits/stdc++.h>
using namespace std;

int findJudge(int n, vector<vector<int>> &arr)
{
    set<int> st;
    for (auto i : arr)
        st.insert(i[0]);
    for (auto i : arr)
    {
        if (st.find(i[1]) == st.end())
            return i[1];
    }
    return -1;
}

int main()
{
    // code
    return 0;
}