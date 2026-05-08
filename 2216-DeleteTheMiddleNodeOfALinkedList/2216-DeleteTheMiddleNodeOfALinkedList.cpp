// Last updated: 08/05/2026, 10:44:25
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
        if(head == NULL || head->next == NULL){
            return NULL;
        }
        ListNode* temp = head;
        int n = 0;
        while(temp!=NULL){
            n++;
            temp = temp->next;
        }
        int mid = n/2;
        temp=head;
        while(temp!=NULL){
            mid--;
            if(mid == 0){
                ListNode* tar = temp->next;
                temp->next = temp->next->next;
                delete tar;
                break;
            }
            temp = temp->next;
        }
        return head;
    }
};