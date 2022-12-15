#include <bits/stdc++.h>
using namespace std;

int longestCommonSubsequence(string s1, string s2)
{
    if (s1 == "" || s2 == "")
        return 0;
    if (s1[0] == s2[0])
        return 1 + longestCommonSubsequence(s1.substr(1), s2.substr(1));
    else
    {
        int t1 = longestCommonSubsequence(s1, s2.substr(1));
        int t2 = longestCommonSubsequence(s1.substr(1), s2);
        return max(t1, t2);
    }
}

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    cout << longestCommonSubsequence(s1, s2);
    return 0;
}