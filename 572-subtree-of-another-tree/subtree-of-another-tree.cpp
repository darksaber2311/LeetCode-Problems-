/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

    bool identical(TreeNode* node1,TreeNode* node2)
    {
        if(node1 == nullptr && node2 == nullptr) return true;
        if(node1 == nullptr || node2 == nullptr)return false;
        if(node1->val != node2->val)return false;
        bool left = identical(node1->left,node2->left);
        bool right = identical(node1->right, node2->right);
        return left && right;
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        queue<TreeNode*> nodes;
        bool check = false;
        nodes.push(root);
        while(!nodes.empty())
        {
            TreeNode* curr = nodes.front();
            nodes.pop();
            if(curr->val == subRoot->val)
            {
                check = identical(curr,subRoot);
            }
            if(check) return true;
            if(curr->left)nodes.push(curr->left);
            if(curr->right)nodes.push(curr->right);
        }
        return check;
    }
};