#include <bits/stdc++.h>
using namespace std;

string makeGood(string s, int sz = 0)
{
    while (sz != s.size())
    {
        sz = s.size();
        for (int i = 0; i + 1 < s.size(); ++i)
        {
            if (abs(s[i] - s[i + 1]) == 32)
                s = s.substr(0, i) + s.substr(i + 2);
        }
    }
    return s;
}

int main()
{
    string s;
    cin >> s;
    cout << makeGood(s) << endl;
    return 0;
}