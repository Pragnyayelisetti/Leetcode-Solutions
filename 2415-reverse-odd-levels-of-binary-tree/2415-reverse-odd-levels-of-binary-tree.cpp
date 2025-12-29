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
    void dfs(TreeNode* a , TreeNode* b , int cnt){
        if(!a || !b) return;
        if(cnt%2!=0) swap(a->val , b->val);
        dfs(a->left , b->right , cnt+1);
        dfs(a->right , b->left , cnt+1);
    }
    TreeNode* reverseOddLevels(TreeNode* root) {
        if(root==nullptr) return root;
        dfs(root->left , root->right , 1);
        return root;
    }
};