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
        int i=0,s=head->val;auto k=head;
       
    while(head->next!=NULL){
            s=s*2+head->next->val;
            i--;
            head=head->next;
        }
      return s;                                   
    }
};