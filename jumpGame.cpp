#include <bits/stdc++.h>
using namespace std;

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
    vector<int> arr = {2, 3, 1, 0, 2};
    cout << canJump(arr);
    return 0;
}