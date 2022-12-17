#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool isOperator(string s)
{
    if (s == "+" || s == "-" || s == "*" || s == "/")
        return true;
    return false;
}

ll calulate(int s1, int s2, string op)
{
    ll ans;
    if (op == "+")
        ans = (s1 + s2);
    else if (op == "-")
        ans = -(s1 - s2);
    else if (op == "*")
        ans = (s1 * s2);
    else if (op == "/")
        ans = s2 / s1;
    return ans;
}

int evalRPN(vector<string> &tokens)
{
    stack<ll> st;
    for (auto i : tokens)
    {
        ll ans = 0;
        if (!isOperator(i))
            st.push(stoi(i));
        else
        {
            ll s1 = st.top();
            st.pop();
            ll s2 = st.top();
            st.pop();
            ans = calulate(s1, s2, i);
            st.push(ans);
        }
    }
    return st.top();
}

int main()
{
    vector<string> v = {"-128", "-128", "*", "-128", "*", "-128", "*", "8", "*", "-1", "*"};
    cout << evalRPN(v);
    return 0;
}