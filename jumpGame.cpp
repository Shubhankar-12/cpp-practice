#include <bits/stdc++.h>
using namespace std;

bool canJump(vector<int> &arr)
{
    int n = arr.size();
    if (n == 0)
        return true;
    if (arr[0] == 0)
        return false;
    else
    {
        for (int i = 1; i <= arr[0]; i++)
        {
            return canJump(arr.resize(, n - 1));
        }
    }
}
// Greedy Solution
bool canJump(vector<int> &nums)
{
    int maxReach = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (i > maxReach)
            return false;
        maxReach = max(maxReach, i + nums[i]);
    }
    return true;
}

int main()
{

    return 0;
}