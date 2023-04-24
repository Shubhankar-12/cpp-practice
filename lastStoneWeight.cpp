#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int lastStoneWeight(vector<int> &stones)
    {
        priority_queue<int> pq;
        for (auto i : stones)
            pq.push(i);
        while (!pq.empty() || pq.size() == 1)
        {
            int tp = pq.top();
            pq.pop();
            int st = pq.top();
            pq.pop();
            if (st != tp)
                pq.push(st - tp);
        }
        return pq.empty() ? 0 : pq.top();
    }
};

int main()
{

    return 0;
}