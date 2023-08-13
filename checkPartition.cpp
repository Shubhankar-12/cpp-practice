#include <bits/stdc++.h>
using namespace std;

bool help(vector<int> &arr, int si, int ei)
{
    if (ei - si + 1 < 2)
        return false;
    if (ei - si + 1 == 2)
    {
        return arr[0] == arr[1];
    }
    if (ei - si + 1 == 3)
    {
        if (arr[0] == arr[1] && arr[1] == arr[2])
            return true;
        else
        {
            for (int i = si; i <= ei; i++)
            {
                if (arr[i] != arr[i - 1] + 1)
                    return false;
            }
            return true;
        }
    }
    int mid = si + (ei - si) / 2;
    return help(arr, si, mid) && help(arr, mid + 1, ei);
}

bool validPartition(vector<int> &arr)
{

    return help(arr, 0, arr.size() - 1);
}

int main()
{

    return 0;
}