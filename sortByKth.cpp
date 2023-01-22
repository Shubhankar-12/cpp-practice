#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> sortTheStudents(vector<vector<int>> &arr, int k)
{
    bool rk = true;
    for (int tq = 0; tq < arr.size(); tq++)
    {
        if (rk)
        {
            rk = false;
            for (int tw = 0; tw < arr.size() - 1; tw++)
            {
                if (arr[tw][k] < arr[tw + 1][k])
                {
                    arr[tw].swap(arr[tw + 1]);
                    rk = true;
                }
            }
        }
        else
            break;
    }
    return arr;
}

int main()
{

    return 0;
}