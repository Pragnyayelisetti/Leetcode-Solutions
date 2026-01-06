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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>arr;
        if(root==nullptr) return arr;
        queue<TreeNode*>q;
        q.push(root);
        int cnt=-1;
        while(!q.empty()){
            int n=q.size();
            cnt++;
            vector<int>a;
            for(int i=0; i<n; i++){
                TreeNode* curr=q.front();
                q.pop();
                a.push_back(curr->val);
                if(curr->left) q.push(curr->left);
                if(curr->right) q.push(curr->right);
            }
            if(cnt%2==1) reverse(a.begin() , a.end());
            arr.push_back(a);
        }
        return arr;
    }
};