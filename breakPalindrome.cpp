#include <bits/stdc++.h>
using namespace std;

string breakPalindrome(string str)
{
    int n = str.length();
    for (int i = 0; i < n / 2; i++)
    {
        if (str[i] != 'a')
        {
            str[i] = 'a';
            return str;
        }
    }
    str[n - 1] = 'b';
    return n < 2 ? "" : str;
}

int main()
{
    string s;
    cin >> s;
    cout << breakPalindrome(s) << endl;
    return 0;
}