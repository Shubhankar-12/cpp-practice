#include <bits/stdc++.h>
using namespace std;

bool detectCapitalUse(string s)
{
    int capt = 0;
    bool allC = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (i == 0 && (int)s[i] >= (int)'A' && (int)s[i] <= (int)'Z')
            allC = 1;
        if ((int)s[i] >= (int)'A' && (int)s[i] <= (int)'Z')
            capt++;
    }
    if (capt == 0)
        return true;
    if (allC && capt == 1)
        return true;
    if (capt == s.length())
        return true;
    return false;
}

int main()
{
    string s;
    cin >> s;
    cout << detectCapitalUse(s);
    return 0;
}