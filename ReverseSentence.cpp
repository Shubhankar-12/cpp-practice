#include <bits/stdc++.h>
using namespace std;

string reverseWords(string s)
{
    int i = 0, st = 0;
    while (i < s.length())
    {
        int en = 0;
        if (s[i + 1] == ' ' || s[i + 1] == '\0')
        {
            en = i;
            while (st <= en)
            {
                char temp = s[st];
                s[st] = s[en];
                s[en] = temp;
                st++;
                en--;
            }
            st = i + 2;
        }
        i++;
    }
    return s;
}

int main()
{
    string s;
    getline(cin, s);
    cout << reverseWords(s) << endl;
    return 0;
}