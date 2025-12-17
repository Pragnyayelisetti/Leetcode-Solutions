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
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int>arr;
        ListNode* temp=head;
        while(temp){
            ListNode* temp1=temp->next;
            int f=0;
            while(temp1){
                if(temp1->val>temp->val){
                    f=1;
                    arr.push_back(temp1->val);
                    break;
                }
                else temp1=temp1->next;
            }
            if(f==0) arr.push_back(0);
            temp=temp->next;
        }
        return arr;
    }
};