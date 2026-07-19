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
    string s="";
    string mini="";
    void solve(TreeNode* root){
        if(root==nullptr) return;
        s+=root->val+'a';//abd
        if(root->left==nullptr && root->right==nullptr){
            //mini=min(mini , s);
            string str=s;
            reverse(str.begin() , str.end());
            if(mini.empty()) mini=str;//dba
            else mini=min(mini , str);
        }
        solve(root->left);
        solve(root->right);
        s.pop_back();
    }
    string smallestFromLeaf(TreeNode* root) {
        solve(root);
        return mini;
    }
};