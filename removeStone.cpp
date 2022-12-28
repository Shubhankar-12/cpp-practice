#include <bits/stdc++.h>
using namespace std;

int minStoneSum(vector<int> &arr, int k)
{
    priority_queue<int> pq;
    for (auto i : arr)
        pq.push(i);
    while (k--)
    {
        int a = pq.top();
        pq.pop();
        a % 2 ? pq.push((a / 2) + 1) : pq.push(a / 2);
    }
    int s = 0;
    while (!pq.empty())
    {
        s += pq.top();
        pq.pop();
    }
    return s;
}

int main()
{
    vector<int> arr = {4, 3, 6, 7};
    cout << minStoneSum(arr, 3);
    return 0;
}