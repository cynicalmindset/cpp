// Last updated: 08/05/2026, 10:47:39
class Solution {
public:
    ListNode* reverse(ListNode* head){
        ListNode* prev = NULL;
        while(head){
            ListNode* next = head->next;
            head->next = prev;
            prev = head;
            head = next;
        }
        return prev;
    }

    ListNode* kthnode(ListNode* temp , int k){
        k -= 1;
        while(temp != NULL && k > 0){
            temp = temp->next;
            k--;
        }
        return temp;
    }

    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp = head;
        ListNode* prevLast = NULL;

        while(temp != NULL){
            ListNode* kth = kthnode(temp , k);

            if(kth == NULL){
                if(prevLast) prevLast->next = temp;
                break;
            }

            ListNode* next = kth->next;
            kth->next = NULL;

          
            ListNode* newHead = reverse(temp);

            if(prevLast == NULL){
                head = newHead;
            } else {
                prevLast->next = newHead;
            }

            prevLast = temp;   
            temp = next;
        }

        return head;
    }
};