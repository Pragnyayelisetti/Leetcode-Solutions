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
    ListNode* mergeNodes(ListNode* head) {
        ListNode *temp=head;
        temp=temp->next;
        ListNode *ans=nullptr;
        ListNode *tail=nullptr;
        int sum=0;
        while(temp){
            if(temp->val!=0) sum += temp->val;
            else{
                ListNode *nn=new ListNode(sum);
                if(ans==nullptr){
                    ans=nn;
                    tail=nn;
                }
                else{
                    tail->next=nn;
                    tail=nn;
                }
                sum=0;
            }
            temp=temp->next;
        }
        return ans;
    }
};