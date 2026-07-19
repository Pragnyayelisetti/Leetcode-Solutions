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
    int sum=0;
    int s=0;
    void solve(TreeNode* root , vector<int>& arr){
        if(root==NULL){
            //arr.push_back(sum);//495 , 
            return;
        }
        sum=sum*10+root->val;//495
        if(root->left==nullptr && root->right==nullptr) arr.push_back(sum);
        solve(root->left,arr);//4
        solve(root->right,arr);
        sum=sum/10;
    }
    int sumNumbers(TreeNode* root) {
        vector<int>arr;
        solve(root , arr);
        int s=0;
        for(int i=0; i<arr.size(); i++) s+=arr[i];
        return s;
    }
};