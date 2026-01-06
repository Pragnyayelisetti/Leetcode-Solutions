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
    long long kthLargestLevelSum(TreeNode* root, int k) {
        queue<TreeNode*>q;
        q.push(root);
        vector<long long>arr;
        while(!q.empty()){
            int n=q.size();
            long long sum=0;
            for(int i=0; i<n; i++){
                TreeNode* curr=q.front();
                q.pop();
                sum+=curr->val;
                if(curr->left) q.push(curr->left);
                if(curr->right) q.push(curr->right);
            }
            arr.push_back(sum);
        }
        sort(arr.rbegin() , arr.rend());
        if(k>arr.size()) return -1;
        else return arr[k-1];
    }
};