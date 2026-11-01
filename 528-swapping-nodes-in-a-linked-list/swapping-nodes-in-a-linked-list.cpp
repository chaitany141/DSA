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
    ListNode* swapNodes(ListNode* head, int k) {
        int n = 0;
        ListNode* temp = head;
        while(temp != NULL){
            n++;
            temp = temp -> next;
        }
        
        int x = n - k;
        temp = head;
        while(x--){
            temp = temp->next;
        }
        ListNode* temp2 = head;
int m = k - 1;
        while(m--){
            temp2 = temp2->next;
        }

        swap(temp->val, temp2->val);

        return head;
    }
};