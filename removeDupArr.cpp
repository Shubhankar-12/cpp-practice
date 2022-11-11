#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int> &arr)
{
    arr.erase(unique(arr.begin(), arr.end()), arr.end());
    return arr.size();
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << removeDuplicates(arr) << endl;
    return 0;
}