#include <bits/stdc++.h>
using namespace std;
vector<vector<string>> findDuplicate(vector<string> &paths)
{
    unordered_map<string, vector<string>> mp;
    vector<vector<string>> ans;
    for (auto i : paths)
    {
        stringstream strs(i);
        string rt;
        string s;
        getline(strs, rt, ' ');
        while (getline(strs, s, ' '))
        {
            string fn = rt + '/' + s.substr(0, s.find('('));
            string fC = s.substr(s.find('(') + 1, s.find(')') - s.find('(') - 1);
            mp[fC].push_back(fn);
        }
    }
    for (auto i : mp)
    {
        if (i.second.size() > 1)
            ans.push_back(i.second);
    }
    return ans;
}

vector<vector<string>> findDuplicate1(vector<string> &paths)
{
    unordered_map<string, vector<string>> files;
    vector<vector<string>> result;

    for (auto path : paths)
    {
        stringstream ss(path);
        string root;
        string s;
        getline(ss, root, ' ');
        while (getline(ss, s, ' '))
        {
            string fileName = root + '/' + s.substr(0, s.find('('));
            string fileContent = s.substr(s.find('(') + 1, s.find(')') - s.find('(') - 1);
            files[fileContent].push_back(fileName);
        }
    }

    for (auto file : files)
    {
        if (file.second.size() > 1)
            result.push_back(file.second);
    }

    return result;
}
int main()
{
    vector<string> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        string s;
        getline(cin, s);
        v.push_back(s);
    }
    vector<vector<string>> ans = findDuplicate(v);
    for (auto i : ans)
    {
        for (auto j : i)
            cout << j << " ";
        cout << endl;
    }
    return 0;
}