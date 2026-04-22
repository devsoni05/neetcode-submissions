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
        if(list1==nullptr && list2==nullptr){
            return nullptr;
        }
        if(list1==nullptr){
            return list2;
        }

        if(list2==nullptr){
            return list1;
        }

        ListNode * i=list1;
        ListNode * j=list2;
        ListNode *ans= new ListNode(-1);
        ListNode * temp=ans;

        while(i!=nullptr && j!=nullptr){
            if(i->val >= j->val){
                temp->next= j;
                j=j->next;
            }

            else if(i->val < j->val){
                temp->next=i;
                i=i->next;
            }

            temp=temp->next;
        }

        while(i!=nullptr){
            temp->next=i;
            i=i->next;
            temp=temp->next;
        }

        while(j!=nullptr){
            temp->next=j;
            j=j->next;
            temp=temp->next;
        }
           
        return ans->next;
    }
};
