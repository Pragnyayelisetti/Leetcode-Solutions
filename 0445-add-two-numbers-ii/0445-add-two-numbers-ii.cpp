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
    ListNode* reverse(ListNode* l1){
        ListNode* prev=nullptr;
        ListNode* curr=l1;
        while(curr){
            ListNode* temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }
        return prev;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* list1=reverse(l1);
        ListNode* list2=reverse(l2);
        int c=0;
        ListNode* head=nullptr;
        ListNode* tail=nullptr;
        while(list1 && list2){
            int sum=list1->val+list2->val+c;
            ListNode* nn=new ListNode(sum%10);
            if(head==nullptr){
                head=nn;
                tail=nn;
            }
            else{
                tail->next=nn;
                tail=nn;
            }
            c=sum/10;
            list1=list1->next;
            list2=list2->next;
        }
        while(list1 && !list2){
            int sum=list1->val+c;
            ListNode* nn=new ListNode(sum%10);
            if(head==nullptr){
                head=nn;
                tail=nn;
            }
            else{
                tail->next=nn;
                tail=nn;
            }
            c=sum/10;
            list1=list1->next;
        }
        while(!list1 && list2){
            int sum=list2->val+c;
            ListNode* nn=new ListNode(sum%10);
            if(head==nullptr){
                head=nn;
                tail=nn;
            }
            else{
                tail->next=nn;
                tail=nn;
            }
            c=sum/10;
            list2=list2->next;
        }
        if(c!=0){
            ListNode* nn = new ListNode(c);
            tail->next=nn;
            tail=nn;
        }
        ListNode* ans=reverse(head);
        return ans;
    }
};