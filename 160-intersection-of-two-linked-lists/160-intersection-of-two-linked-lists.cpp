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
        
        for(auto i=headA;i!=NULL;i=i->next)
        {
            for(auto j=headB;j!=NULL;j=j->next)
                if(j==i)return j;
        } 
        return NULL;
    }
};