#include <bits/stdc++.h>
using namespace std;

vector<int> sumEvenAfterQueries(vector<int> &nums, vector<vector<int>> &queries)
{
    vector<int> ans;
    int n = queries.size();
    int evenSum = 0;
    for (auto i : nums)
    {
        if (!(i % 2))
            evenSum += i;
    }
    for (auto i : queries)
    {
        int t = 0;
        if (nums[i[1]] % 2 == 0)
            t = nums[i[1]];
        nums[i[1]] += i[0];
        if (nums[i[1]] % 2 == 0)
            evenSum = evenSum - t + nums[i[1]];
        else if (t != 0 && nums[i[1]] % 2 != 0)
            evenSum -= t;
        ans.push_back(evenSum);
    }
    return ans;
}

int main()
{
    return 0;
}