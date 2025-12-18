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
    ListNode* reverse(ListNode* h){
        ListNode* prev=nullptr;
        ListNode* curr=h;
        while(curr){
            ListNode* temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }
        return prev;
    }
    ListNode* doubleIt(ListNode* head) {
        ListNode *temp=reverse(head);
        ListNode *t=temp;
        int c=0;
        while(temp){
            //8->9->9
            int a=2*(temp->val)+c;
            temp->val=a%10;//7
            c=a/10;//1
            temp=temp->next;
        }
        t=reverse(t);//9->9->8
        if(c!=0){
            ListNode* nn=new ListNode(c);
            nn->next=t;
            t=nn;
        }
        return t;
    }
};