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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        int mini=INT_MAX;
        int maxi=-1;
        int cnt=1;
        ListNode *temp=head; 
        vector<int>arr;
        while(temp->next->next!=nullptr){
            ListNode *prev=temp;
            temp=temp->next;
            ListNode *n=temp->next;
            if((prev->val<temp->val && n->val<temp->val) || (prev->val>temp->val && n->val>temp->val)){
                arr.push_back(cnt);
            }
            cnt++;
            //temp=temp->next;
        }
        if(arr.size()<2) return {-1,-1};
        maxi=arr[arr.size()-1]-arr[0];
        for(int i=0; i<arr.size()-1; i++){
            mini=min(mini , arr[i+1]-arr[i]);
        }
        return {mini,maxi};
    }
};