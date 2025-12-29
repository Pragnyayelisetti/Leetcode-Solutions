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
    int c1=0;
    int aos(TreeNode* root , int &c){
        if(root==nullptr){
            c=0;
            return 0;
        }
        int lc=0,rc=0;
        int sum=root->val + aos(root->left , lc) + aos(root->right , rc);
        int cnt=1+lc+rc;
        c=cnt;
        int avg=sum/cnt;
        if(avg==root->val) c1++;
        return sum;
    }
    int averageOfSubtree(TreeNode* root) {
        int c=0;
        aos(root , c);
        return c1;
    }
};