#include <bits/stdc++.h>
using namespace std;
#define ll long long

int numberOfBits(int n)
{
    return log2(n) + 1;
}

int concatenatedBinary(int n)
{
    long ans = 0, MOD = 1e9 + 7;

    for (int i = 1; i <= n; ++i)
    {
        int len = numberOfBits(i);
        ans = ((ans << len) % MOD + i) % MOD;
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    ll ans = concatenatedBinary(n);
    cout << ans << endl;

    return 0;
}