#include <bits/stdc++.h>
using namespace std;
#define ll long long

int decToBin(int n)
{
    return log2(n) + 1;
}

int concatenatedBinary(int n)
{
    long res = 0, md = 1e9 + 7;

    for (int i = 1; i <= n; ++i)
    {
        int len = decToBin(i);
        res = ((res << len) % md + i) % md;
    }
    return res;
}

int main()
{
    int n;
    cin >> n;
    ll ans = concatenatedBinary(n);
    cout << ans << endl;

    return 0;
}