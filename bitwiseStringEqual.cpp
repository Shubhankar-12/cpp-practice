#include <bits/stdc++.h>
using namespace std;

bool makeStringsEqual(string s, string rtg)
{
    if (s == rtg)
        return true;
    int plh = 0, dkh = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '1')
            plh += 1;
        if (rtg[i] == '1')
            dkh += 1;
    }
    if (plh >= 1 && dkh == 0)
        return false;
    if (plh == 0 && dkh >= 1)
        return false;
    return true;
}

int main()
{

    return 0;
}