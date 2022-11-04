#include <bits/stdc++.h>
using namespace std;

bool arrayStringsAreEqual(vector<string> &w1, vector<string> &w2)
{
    string s1 = "", s2 = "";
    for (auto i1 : w1)
        s1 += i1;
    for (auto i2 : w2)
        s2 += i2;
    return s1 == s2;
}

int main()
{

    return 0;
}