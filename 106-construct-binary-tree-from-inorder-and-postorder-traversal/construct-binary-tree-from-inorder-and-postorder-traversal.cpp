/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    int n;
    TreeNode* solve(vector<int>& inorder, vector<int>& postorder, int& idx,
                    int start, int end) {
        if (idx < 0 || start > end)
            return NULL;

        int valueIdx = 0;
        for (int i = start; i <= end; i++) {
            if (postorder[idx] == inorder[i])
                valueIdx = i;
        }

        TreeNode* root = new TreeNode(postorder[idx]);
        idx--;
        root->right = solve(inorder, postorder, idx, valueIdx + 1, end);
        root->left = solve(inorder, postorder, idx, start, valueIdx - 1);

        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {

        n = postorder.size();
        int idx = n - 1;
        return solve(inorder, postorder, idx, 0, n - 1);
    }
};