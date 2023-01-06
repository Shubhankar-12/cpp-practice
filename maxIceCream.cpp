#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll maxIceCream(vector<ll> &arr, ll k)
{
    sort(arr.begin(), arr.end());
    ll i = 0, c = 0;
    while (k >= arr[i] && i < arr.size())
    {
        if (arr[i] <= k)
        {
            k -= arr[i];
            c++;
        }
        i++;
    }
    return c;
}

int main()
{
    vector<ll> arr = {1, 3, 2, 4, 1};
    ll k = 7;
    cout << maxIceCream(arr, k) << endl;
    return 0;
}