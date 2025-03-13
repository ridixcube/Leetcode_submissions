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
    bool check(TreeNode* leftptr, TreeNode* rightptr) {
        if (leftptr == NULL && rightptr == NULL) {
            return true;
        }
        if (leftptr == NULL || rightptr == NULL)
            return false;
        return ((leftptr->val == rightptr->val) &&
                check(leftptr->left, rightptr->right) &&
                check(leftptr->right, rightptr->left));
    }
    bool isSymmetric(TreeNode* root) { return check(root->left, root->right); }
};