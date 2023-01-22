#include <bits/stdc++.h>
using namespace std;
#define M (int)1e9 + 7

int rev(int n)
{
    int res = 0;
    while (n)
    {
        int rem = n % 10;
        res = res * 10 + rem;
        n = n / 10;
    }
    return res;
}

int alternateDigitSum(int n)
{
    int n1 = rev(n);
    int ans = 0;
    int c = 0;
    while (n1)
    {
        int rem = n1 % 10;
        if (c % 2 == 0)
        {
            ans += rem;
        }
        else
            ans -= rem;
        n1 = n1 / 10;
        c++;
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    cout << alternateDigitSum(n);
    return 0;
}