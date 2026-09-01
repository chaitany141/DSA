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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        ListNode* temp = head;

        int n = 1;
        while(temp->next != NULL){
            temp = temp->next;
            n++;
        }
        if(n < 3) return {-1, -1};

        vector<int> arr;

        ListNode* prev = head;
        ListNode* curr = head->next;
        ListNode* nex = head->next->next;

        while(nex != NULL){
            if((prev->val < curr->val && nex->val < curr->val) || (prev->val > curr->val && nex->val > curr->val) ){
                arr.push_back(1);
            }
            
            else arr.push_back(0);

            prev = prev->next;
            curr = curr->next;
            nex = nex->next;
        }

        int mind = -1;
        int maxd = -1;
        int last = -1, first_seen = -1;

        for(int i=0; i<arr.size(); i++){
            cout<<arr[i]<<" ";
            if(arr[i] == 1){
                if(last == -1) {
                    last = i;
                    first_seen = i;
                }
                else {
                    if(mind == -1){
                        mind = i - last;
                    }
                    mind = min(mind, i-last);
                    maxd = max(maxd, i-first_seen);
                    last = i;

                }
            }
        }

        return {mind, maxd};

    }
};