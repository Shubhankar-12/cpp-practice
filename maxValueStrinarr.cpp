#include <bits/stdc++.h>
using namespace std;

int maximumValue(vector<string> &strs)
{
    int maxx = 0;

    for (auto i : strs)
    {
        bool dekhchar = 0, dekhint = 0;
        for (auto j : i)
        {
            if (j - '0' >= 0 && j - '0' <= 9)
            {
                dekhint = 1;
            }
            else
                dekhchar = 1;
        }
        if (dekhchar && dekhint)
            maxx = max(maxx, (int)i.size());
        else if (dekhint && !dekhchar)
            maxx = max(maxx, stoi(i));
        else if (!dekhint && dekhchar)
            maxx = max(maxx, (int)i.size());
    }
    return maxx;
}

int main()
{
    vector<string> strs;
    for (int i = 0; i < 5; i++)
    {
        string s;
        cin >> s;
        strs.push_back(s);
    }
    cout << maximumValue(strs);
    return 0;
}