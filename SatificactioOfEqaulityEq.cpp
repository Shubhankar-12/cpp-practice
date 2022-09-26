#include <bits/stdc++.h>
using namespace std;

int findEq(vector<int> &gr, int i)
{
    return gr[i] == -1 || gr[i] == i ? i : findEq(gr, gr[i]);
}
bool equationsPossible(vector<string> &equations)
{
    vector<int> graph('z' + 1, -1);
    for (auto s : equations)
        if (s[1] == '=')
            graph[findEq(graph, s[0])] = findEq(graph, s[3]);
    for (auto s : equations)
        if (s[1] == '!' && findEq(graph, s[0]) == findEq(graph, s[3]))
            return false;
    return true;
}

int main()
{

    return 0;
}