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
    void solve(ListNode*& head){
        if(head==nullptr || head->next==nullptr) return;
        //head=1
        ListNode* curr=head;//1
        ListNode* nex=head->next->next;//3
        curr=head->next;//2 
        head->next=nex;//1--> 3
        curr->next=head;//2 --> 1 -->3 -->4
        head=curr;
        solve(head->next->next);
    }
    ListNode* swapPairs(ListNode* head) {
        solve(head);
        return head;
    }
};