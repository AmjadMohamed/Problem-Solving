// https://leetcode.com/problems/binary-tree-preorder-traversal

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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> order;
        stack<TreeNode*> stk;

        stk.push(root);
        TreeNode* tmp;
        while(!stk.empty())
        {
            tmp = stk.top();
            stk.pop();
            if(tmp != NULL)
            {
                order.push_back(tmp -> val);
                stk.push(tmp -> right);
                stk.push(tmp -> left);
            }
            
        }
        return order;
    }
};