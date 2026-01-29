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
    TreeNode* dfs(TreeNode* root , int x){
        if(root==nullptr){
            return new TreeNode(x);
        }
        if(root->val>x){
            root->left=dfs(root->left , x);
        }
        else root->right=dfs(root->right , x);
        return root;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        TreeNode* root=nullptr;
        for(int i=0; i<preorder.size(); i++){
            root=dfs(root , preorder[i]);
        }
        return root;
    }
};