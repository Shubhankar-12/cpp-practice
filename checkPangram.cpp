#include <bits/stdc++.h>
using namespace std;

bool checkIfPangram(string str)
{
    if (str.size() < 26)
        return false;
    unordered_map<char, bool> mp;
    for (auto i : str)
        mp[i] = true;
    for (int i = 97; i < (97 + 26); i++)
    {
        char ch = char(i);
        if (!mp[ch])
            return false;
    }
    return true;
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