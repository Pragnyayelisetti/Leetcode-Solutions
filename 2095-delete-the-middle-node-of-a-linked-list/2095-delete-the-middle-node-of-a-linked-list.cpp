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
    ListNode* deleteMiddle(ListNode* head) {
        int cnt=0;
        ListNode* temp=head;
        while(temp!=nullptr){
            cnt++;
            temp=temp->next;
        }
        if(cnt==1) return nullptr;
        int n=cnt/2;
        temp=head;
        int a=0;
        while(temp!=nullptr){
            if(a==n-1){
                temp->next=temp->next->next;
                break;
            }
            a++;
            temp=temp->next;
        }
        return head;
    }
};