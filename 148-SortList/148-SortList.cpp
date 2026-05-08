// Last updated: 08/05/2026, 10:46:55
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
    ListNode* sortList(ListNode* head) {
        ListNode* temp = head;
        int i = 0;
        vector<int> arr;
        while(temp != NULL){
            arr.push_back(temp->val);
            temp = temp->next;
        }
        sort(arr.begin() , arr.end());
        temp = head;
        while(temp != NULL){
            temp->val = arr[i];
            i++;
            temp = temp->next;
        }
        return head;
    }
};