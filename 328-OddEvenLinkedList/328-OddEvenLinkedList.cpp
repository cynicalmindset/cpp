// Last updated: 08/05/2026, 10:46:16
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
    ListNode* oddEvenList(ListNode* head) {
        if(head == NULL) return head;
        ListNode* temp = head;
       vector<int> arr;
       while(temp != NULL){
        arr.push_back(temp->val);
        if(temp->next == NULL)break;
        temp = temp->next->next;
       }
       temp = head->next;
       while(temp!=NULL){
        arr.push_back(temp->val);
        if(temp->next == NULL)break;
        temp = temp->next->next;
       }
       temp = head;
       int i = 0;
       while(temp!=NULL){
        temp->val = arr[i++];
        temp = temp->next;
       }
    return head;
    }
};