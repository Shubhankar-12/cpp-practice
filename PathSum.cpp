#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> pathSum(TreeNode *root, int sum)
{
    vector<vector<int>> res;
    vector<int> v;
    findPaths(root, sum, v, res);
    return res;
}

void findPaths(TreeNode *node, int sum, vector<int> &path, vector<vector<int>> &paths)
{
    if (!node)
        return;
    path.push_back(node->val);
    if (!(node->left) && !(node->right) && sum == node->val)
        paths.push_back(path);
    findPaths(node->left, sum - node->val, path, paths);
    findPaths(node->right, sum - node->val, path, paths);
    path.pop_back();
}

int main()
{

    return 0;
}