#include <bits/stdc++.h>
using namespace std;

int numDecodings(string str)
{
    int n = str.size();
    vector<int> arr(n + 1);
    arr[n] = 1;
    for (int i = n - 1; i >= 0; i--)
    {
        if (str[i] == '0')
            arr[i] = 0;
        else
        {
            arr[i] = arr[i + 1];
            if (i < n - 1 && (str[i] == '1' || str[i] == '2' && str[i + 1] < '7'))
                arr[i] += arr[i + 2];
        }
    }
    return str.empty() ? 0 : arr[0];
}

int main()
{

    return 0;
}