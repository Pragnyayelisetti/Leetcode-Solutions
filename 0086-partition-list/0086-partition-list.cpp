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
    ListNode* partition(ListNode* head, int x) {
        ListNode* less=new ListNode(0);
        ListNode* equal=new ListNode(0);
        ListNode* temp=head;
        ListNode* temp1=less;
        ListNode* temp2=equal;
        temp=head;
        while(temp!=nullptr){
            if(temp->val<x){
                temp1->next=new ListNode(temp->val);
                temp1=temp1->next;
            }
            else{
                temp2->next=new ListNode(temp->val);
                temp2=temp2->next;
            }
            temp=temp->next;
        }
        temp1->next=equal->next;
        return less->next;
    }
};