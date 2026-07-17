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
    ListNode* swapNodes(ListNode* head, int k) {
        int cnt=1;
        ListNode* temp=head;
        while(temp->next!=nullptr){
            cnt++;
            temp=temp->next;
        }
        int start=k;
        int end=cnt-k+1;
        temp=head;
        ListNode* i=temp;
        ListNode* j=temp;
        int c=0;
        while(temp!=nullptr){
            c++;
            if(c==start) i=temp;
            if(c==end) j=temp;
            temp=temp->next;
        }
        int t=i->val;
        i->val=j->val;
        j->val=t;
        return head;
    }
};