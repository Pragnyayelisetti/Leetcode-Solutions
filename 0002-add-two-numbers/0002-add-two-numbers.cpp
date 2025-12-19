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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head=nullptr;
        ListNode* tail=nullptr;
        int c=0;
        while(l1 && l2){
            int sum=l1->val+l2->val+c;//8
            ListNode* nn=new ListNode(sum%10);//8
            if(head==nullptr){
                head=nn;
                tail=nn;
            }
            else{
                tail->next=nn; //7 , 0 , 8
                tail=nn;
            }
            c=sum/10;//0
            l1=l1->next;
            l2=l2->next;
        }
        while(l1 && !l2){
            int sum=l1->val+c;
            ListNode* nn=new ListNode(sum%10);//8
            if(head==nullptr){
                head=nn;
                tail=nn;
            }
            else{
                tail->next=nn; //7 , 0 , 8
                tail=nn;
            }
            c=sum/10;
            l1=l1->next;
        }
        while(!l1 && l2){
            int sum=l2->val+c;
            ListNode* nn=new ListNode(sum%10);//8
            if(head==nullptr){
                head=nn;
                tail=nn;
            }
            else{
                tail->next=nn; //7 , 0 , 8
                tail=nn;
            }
            c=sum/10;
            l2=l2->next;
        }
        if(c!=0){
            ListNode* nn=new ListNode(c);
            tail->next=nn;
            tail=nn;
        }
        return head;
    }
};