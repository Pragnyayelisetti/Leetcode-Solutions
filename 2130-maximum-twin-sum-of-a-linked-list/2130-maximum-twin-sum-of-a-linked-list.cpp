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
    int pairSum(ListNode* head) {
        vector<int>arr;
        ListNode *temp = head;
        while(temp!=nullptr){
            arr.push_back(temp->val);
            temp = temp->next;
        }
        for(int i=0; i<arr.size(); i++) cout<<arr[i]<<" ";
        int i=0,j=arr.size()-1;
        int sum=0,maxi=0;
        while(i<j){
            sum += arr[i]+arr[j];
            maxi=max(maxi , sum);
            sum=0;
            i++;
            j--;
        }
        return maxi;
    }
};