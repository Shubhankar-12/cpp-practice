#include <bits/stdc++.h>
using namespace std;

bool isValid(string str)
{
    if (str[0] == '0')
        return false;
    return stoi(str) <= 255;
}

void help(string str, int i, int par, string res, vector<string> ans)
{
    if (i == str.length() || par == 4)
    {
        if (str.length() == i && par == 4)
        {
            ans.push_back(res.substr(0, res.length() - 1));
        }
        return;
    }
    help(str, i + 1, par + 1, res + str[i] + ".", ans);
    if (i + 2 <= str.length() && isValid(str.substr(i, i + 2)))
        help(str, i + 2, par + 1, res + str.substr(i, i + 2) + ".", ans);
    if (i + 3 <= str.length() && isValid(str.substr(i, i + 3)))
        help(str, i + 3, par + 1, res + str.substr(i, i + 3) + ".", ans);
}

vector<string> restoreIpAddresses(string s)
{
    vector<string> res;
    help(s, 0, 0, "", res);
    return res;
}

int main()
{
    string s;
    cin >> s;
    vector<string> res = restoreIpAddresses(s);
    for (auto i : res)
        cout << i << endl;
    return 0;
}