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
    ListNode* mergeNodes(ListNode* head) {
        int s=0; ListNode* d = new ListNode(0);
        ListNode* r=d;
        head=head->next;
        while(head!=NULL){
            if(head->val==0){
                 d->next = new ListNode(s);
                d=d->next;
                s=0;
            
            }
            else s+=head->val;
            head=head->next;
        }
        return r->next;
    }
};