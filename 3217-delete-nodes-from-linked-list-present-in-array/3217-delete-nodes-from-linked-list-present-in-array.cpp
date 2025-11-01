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
    bool isPresent(vector<int>& nums , int n){
        int start=0;
        int end=nums.size()-1;
        while(start<=end){
            int mid = start + (end-start)/2;
            if(nums[mid]==n) return 1;
            else if(nums[mid]<n) start=mid+1;
            else end=mid-1;
        }
        return 0;
    }
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        ListNode* curr=head;
        ListNode* prev=nullptr;
        sort(nums.begin() , nums.end());
        while(curr!=nullptr){
            int n=curr->val;//5
            if(isPresent(nums , n)){
                if(curr==head){
                    head=curr->next;
                    curr=head;
                }
                else{
                    prev->next=curr->next;//null
                    curr=prev->next;
                }
            }
            else{
                prev=curr;
                curr=curr->next;
            }
        }
        return head;
    }
};