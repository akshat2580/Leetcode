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
        int i=0,s=0;auto k=head;
        while(k!=NULL){
           
            i++;
            k=k->next;
        }i--;
    while(head!=NULL){
            if(head->val)
            s+=pow(2,i);
            i--;
            head=head->next;
        }
      return s;                                   
    }
};