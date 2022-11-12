#include <bits/stdc++.h>
using namespace std;
#define M 1000000007

int distinctAverages(vector<int> &nums)
{
    if (nums.size() == 2)
        return 1;
    set<float> st;
    sort(nums.begin(), nums.end());
    int i = 0, j = nums.size() - 1;
    while (i < j)
    {
        float avg = (float)(nums[i] + nums[j]) / 2;
        st.insert(avg);
        i++;
        j--;
    }
    return st.size();
}

int f(int curr, int zero, int one, vector<int> &dp)
{
    if (curr == 0)
        return 1;
    if (curr < 0)
        return 0;
    if (dp[curr] != -1)
        return dp[curr] % M;
    return dp[curr] = (f(curr - zero, zero, one, dp) % M + f(curr - one, zero, one, dp) % M) % M;
}

int countGoodStrings(int low, int high, int zero, int one)
{
    vector<int> dp(high + 1, -1);
    int ans = 0;
    for (int i = low; i <= high; i++)
    {
        ans = (ans % M + f(i, zero, one, dp) % M) % M;
    }
    return ans;
}

int main()
{
    return 0;
}