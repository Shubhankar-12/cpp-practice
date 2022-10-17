#include <bits/stdc++.h>
using namespace std;

bool checkIfPangram(string str)
{
    unordered_set<char> st;
    for (auto ch : str)
        st.insert(ch);
    return st.size() == 26;
}

int main()
{
    string s;
    cin >> s;
    if (checkIfPangram(s))
        cout << "yes" << endl;
    else
        cout << "no" << endl;
    return 0;
}