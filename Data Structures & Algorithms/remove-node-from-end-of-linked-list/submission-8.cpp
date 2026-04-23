class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int len = 0;
        ListNode* temp = head;

        // Step 1: find length
        while (temp != nullptr) {
            len++;
            temp = temp->next;
        }

        int k = len - n;

        // Step 2: if head needs to be removed
        if (k == 0) {
            return head->next;
        }

        // Step 3: move to (k-1)th node
        temp = head;
        int i = 0;
        while (i < k - 1) {
            temp = temp->next;
            i++;
        }

        // Step 4: delete kth node
        temp->next = temp->next->next;

        return head;
    }
};