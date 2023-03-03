#include <bits/stdc++.h>
using namespace std;

int strStr(string str, string s)
{
    int m = str.length(), n = s.length();
    string temp = "";
    if (str.size() == s.size())
        return str == s ? 0 : -1;
    for (int i = 0, j = 0; i < m;)
    {
        if (temp.size() < s.size())
            temp += str[i++];
        if (temp.size() == s.size())
        {
            if (temp == s)
                return j;
            temp.erase(temp.begin());
            j++;
        }
    }

    return -1;
}

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    cout << strStr(s1, s2);
    return 0;
}