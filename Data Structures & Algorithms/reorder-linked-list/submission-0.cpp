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
    void reorderList(ListNode* head) {
        vector<int> aux;
        ListNode* temp = head;
        while (temp != nullptr) {
            aux.push_back(temp->val);
            temp = temp->next;
        }

        temp = head;
        int i = 0;
        int j = aux.size() - 1;
        vector<int>main;
        while(i<=j){
            main.push_back(aux[i]);
            main.push_back(aux[j]);
            i++;
            j--;
        }
    int k=0;
        while(temp!=nullptr){
            temp->val=main[k++];
            temp=temp->next;
        }
        
        
    }
};
