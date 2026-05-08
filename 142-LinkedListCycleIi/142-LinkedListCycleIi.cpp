// Last updated: 08/05/2026, 10:46:59
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head == NULL){
            return NULL;
        }
        unordered_set<ListNode*>seen;
        
        while(head!=NULL){
            if(seen.count(head)){
                return head;
            }
            seen.insert(head);
            head = head->next;
        }
        return NULL;
    };
};  