/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* ans=nullptr;
    int solve(ListNode* head,int maxi){
        if(head==nullptr) return 0;
        int a=solve(head->next,maxi);
        int f=0;
        if(a<=head->val){
            ListNode* temp=new ListNode(head->val);
            //cout<<temp->val<<" ";
            temp->next=ans;
            ans=temp;
        }
        return a=max(a,head->val);
    }
    ListNode* removeNodes(ListNode* head) {
        int maxi=INT_MIN;
        //int cnt=0;
        solve(head,maxi);
        return ans;
    }
};