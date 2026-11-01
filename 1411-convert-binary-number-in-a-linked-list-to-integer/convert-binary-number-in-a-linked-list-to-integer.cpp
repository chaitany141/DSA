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
    int getDecimalValue(ListNode* head) {
        int n = 0;
        int ans = 0;

        ListNode* temp = head;
        while(temp->next != NULL){
            n++;
            temp = temp->next;
        }

        ListNode* temp2 = head;
        while(temp2 != NULL){
            ans += pow(2, n) * temp2->val; temp2 = temp2->next;
            n--;
        }
        return ans;


        


    }
};