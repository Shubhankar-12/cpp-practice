#include <bits/stdc++.h>
using namespace std;

vector<int> findClosestElements(vector<int> &arr, int k, int x)
{
    int lt = 0, rg = arr.size() - k;
    while (lt < rg)
    {
        int mid = (lt + rg) / 2;
        if (x - arr[mid] > arr[mid + k] - x)
            lt = mid + 1;
        else
            rg = mid;
    }
    return vector<int>(arr.begin() + lt, arr.begin() + lt + k);
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        arr.push_back(t);
    }
    int k, x;
    cin >> k >> x;
    vector<int> ans = findClosestElements(arr, k, x);
    for (auto it : ans)
        cout << it << " ";
    return 0;
}