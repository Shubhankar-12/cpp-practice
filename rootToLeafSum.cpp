#include <bits/stdc++.h>
using namespace std;

bool hasPathSum(TreeNode *root, int sum)
{
    if (root == NULL)
        return false;
    if (root->val == sum && root->left == NULL && root->right == NULL)
        return true;
    return hasPathSum(root->left, sum - root->val) || hasPathSum(root->right, sum - root->val);
}

int main()
{

    return 0;
}