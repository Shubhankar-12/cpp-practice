#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

void preOrder(TreeNode *root, vector<int> &arr)
{
    if (!root)
        return;
    arr.push_back(root->val);
    preOrder(root->left, arr);
    preOrder(root->right, arr);
}

vector<int> preorderTraversal(TreeNode *root)
{
    vector<int> arr;
    preOrder(root, arr);
    return arr;
}

int main()
{

    return 0;
}