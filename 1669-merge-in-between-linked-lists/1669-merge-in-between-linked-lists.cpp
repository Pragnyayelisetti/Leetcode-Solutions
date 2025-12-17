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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {//list1
        int x=b-a+1;//2
        int c=-0;
        ListNode* head=list1;//10->1->13->5//10->1->13->5
        while(c<a-1){//1<2
            head=head->next;//13
            c++;//2
        }
        //head=13
        ListNode* tail=head;
        while(x+1){//0
            tail=tail->next;//5
            x--;//-1
        }
        ListNode* tail1=list2;
        while(tail1->next!=nullptr) tail1=tail1->next;
        head->next=list2;
        tail1->next=tail;
        return list1;
    }
};