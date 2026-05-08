// Last updated: 08/05/2026, 10:47:42
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {

         ListNode* dummy = new ListNode(0);
    dummy->next = head;

    ListNode* fast = dummy;
    ListNode* slow = dummy;

    // Step 1: move fast n steps
    for(int i = 0; i < n; i++) {
        fast = fast->next;
    }

    // Step 2: move both until fast reaches end
    while(fast->next != NULL) {
        fast = fast->next;
        slow = slow->next;
    }

    // Step 3: delete node
    ListNode* toDelete = slow->next;
    slow->next = slow->next->next;
    delete toDelete;

    return dummy->next;
    }
};