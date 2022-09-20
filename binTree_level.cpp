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

class Solution
{
public:
    vector<vector<int>> levelOrder(TreeNode *root)
    {
        vector<vector<int>> ans;
        if (!root)
            return ans;
        vector<int> res;
        queue<TreeNode *> que;
        que.push(root);
        que.push(NULL);
        while (!que.empty())
        {
            TreeNode *temp = que.front();
            que.pop();
            if (!temp)
            {
                ans.push_back(res);

                res.resize(0);
                if (!que.empty())
                {
                    que.push(NULL);
                }
            }
            else
            {
                res.push_back(temp->val);
                if (temp->left)
                    que.push(temp->left);
                if (temp->right)
                    que.push(temp->right);
            }
        }
        return ans;
    }
};

int main()
{

    return 0;
}