#include <bits/stdc++.h>
using namespace std;

string pushDominoes(string d)
{
    d = 'L' + d + 'R';
    string ans = "";
    for (int i = 0, j = 1; j < d.length(); ++j)
    {
        if (d[j] == '.')
            continue;
        int mig = j - i - 1;
        if (i > 0)
            ans += d[i];
        if (d[i] == d[j])
            ans += string(mig, d[i]);
        else if (d[i] == 'L' && d[j] == 'R')
            ans += string(mig, '.');
        else
            ans += string(mig / 2, 'R') + string(mig % 2, '.') + string(mig / 2, 'L');
        i = j;
    }
    return ans;
}

int main()
{

    return 0;
}