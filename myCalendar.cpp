class MyCalendarThree
{
    map<int, int> mp;

public:
    int book(int s, int e)
    {
        mp[s]++; // 1 new event will be starting at [s]
        mp[e]--; // 1 new event will be ending at [e];
        int i = 0, k = 0;
        for (pair<int, int> t : mp)
            k = max(k, i += t.second);
        return k;
    }
};