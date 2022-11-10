#include <bits/stdc++.h>
using namespace std;

string removeDuplicates(string S)
{
    string res = "";
    for (char &c : S)
        if (res.size() && c == res.back())
            res.pop_back();
        else
            res.push_back(c);
    return res;
}

int main()
{
    string s;
    cin >> s;
    // cout << s.substr(0, 1) + s.substr(3) << endl;
    cout << removeDuplicates(s) << endl;
    return 0;
}