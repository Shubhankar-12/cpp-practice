#include <bits/stdc++.h>
using namespace std;

string reverseVowels(string s)
{
    int i = 0, j = s.length() - 1;
    while (i < j)
    {
        i = s.find_first_of("aeiouAEIOU", i);
        j = s.find_last_of("aeiouAEIOU", j);
        if (i < j)
            swap(s[i++], s[j--]);
    }
    return s;
}

int main()
{
    string s;
    cin >> s;
    cout << reverseVowels(s) << endl;
    return 0;
}