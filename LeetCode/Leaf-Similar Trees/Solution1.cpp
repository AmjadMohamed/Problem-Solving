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

    void CalculateLeaves(TreeNode* node, std::vector<int>& leafValues)
    {
        if(!node)
        {
            return;
        }

        if (!node->left && !node->right) 
        {
            leafValues.push_back(node->val);
            return;
        }

        CalculateLeaves(node -> left , leafValues);
        CalculateLeaves(node -> right , leafValues);
    }

    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> tree1leaves;
        vector<int> tree2leaves;

        CalculateLeaves(root1 , tree1leaves);
        CalculateLeaves(root2 , tree2leaves);

        return tree1leaves == tree2leaves;

    }
};