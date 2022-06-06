/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA==NULL||headB==NULL)return NULL;
        auto k=headA,l=headB;
        for(auto i=headA;i!=NULL;)
        {
           if(k==l)return k;
            else if(l->next){
                l=l->next;i=k;
            }
            else {
                if(k->next)
                k=k->next;
              l=headB;i=i->next;   }
        }  
        return NULL;
    }
};