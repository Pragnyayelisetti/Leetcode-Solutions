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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* head=nullptr;
        ListNode* tail=nullptr;
        while(list1 && list2){
            if(list1->val<list2->val){
                ListNode* nn= new ListNode(list1->val);
                if(head==nullptr){
                    head=nn;
                    tail=nn;
                }
                else{
                    tail->next=nn;
                    tail=nn;
                }
                list1=list1->next;
            }
            else if(list1->val==list2->val){
                ListNode* nn=new ListNode(list1->val);
                ListNode* nn1=new ListNode(list2->val);
                if(head==nullptr){
                    head=nn;
                    head->next=nn1;
                    tail=nn1;
                }
                else{
                    tail->next=nn;
                    tail=nn;
                    tail->next=nn1;
                    tail=nn1;
                }
                list1=list1->next;
                list2=list2->next;
            }
            else{
                ListNode* nn= new ListNode(list2->val);
                if(head==nullptr){
                    head=nn;
                    tail=nn;
                }
                else{
                    tail->next=nn;
                    tail=nn;
                }
                list2=list2->next;
            }
        }
        while(list1 && !list2){
            ListNode* nn= new ListNode(list1->val);
            if(head==nullptr){
                head=nn;
                tail=nn;
            }
            else{
                tail->next=nn;
                tail=nn;
            }
            list1=list1->next;
        }
        while(!list1 && list2){
            ListNode* nn= new ListNode(list2->val);
            if(head==nullptr){
                head=nn;
                tail=nn;
            }
            else{
                tail->next=nn;
                tail=nn;
            }
            list2=list2->next;
        }
        return head;
    }
};