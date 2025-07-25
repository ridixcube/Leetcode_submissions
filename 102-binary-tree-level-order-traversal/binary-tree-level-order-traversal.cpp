class Solution {
public:
    void check(TreeNode* root, vector<vector<int>> &res, int level) {
        if(root == NULL)return;
        if(res.size() <= level){
            res.resize(level + 1);
        }
        res[level].push_back(root -> val);
        check(root -> left, res, level+1), check (root -> right, res, level+1);
}
        vector<vector<int>> levelOrder(TreeNode* root){
            vector<vector<int>> res;
            check(root, res, 0);
            return res;
    }
};