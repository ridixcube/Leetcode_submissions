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
    TreeNode* constructFromPrePost(vector<int>& preorder, vector<int>& postorder) {
        stack<TreeNode*> nodes;
        TreeNode* root = new TreeNode(preorder[0]);
        nodes.push(root);
        int preIdx = 1, postIdx = 0;

        while (preIdx < preorder.size()) {
            TreeNode* curr = nodes.top();
            if (curr->val == postorder[postIdx]) {
                nodes.pop();
                postIdx++;
            } else {
                TreeNode* child = new TreeNode(preorder[preIdx++]);
                if (!curr->left) {
                    curr->left = child;
                } else {
                    curr->right = child;
                }
                nodes.push(child);
            }
        }
        return root;
    }
};
