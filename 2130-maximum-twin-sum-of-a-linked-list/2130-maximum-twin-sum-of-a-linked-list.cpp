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
   ListNode* mid(ListNode* head){
       
      ListNode* f=head;
       ListNode* s=head;
      while(f!=NULL&&f->next!=NULL){
         f=f->next->next;
          s=s->next;
      }
       return s;
  }
     ListNode* rev(ListNode* m){
         ListNode*c=m;ListNode* r=NULL;
         while(c!=NULL){
            ListNode* t=c->next;              
             c->next=r;
             r=c;
             c=t;
         }
    return r;
    }
    int pairSum(ListNode* head) {int s=0;
       if(head==NULL)return 0;
        ListNode* m=mid(head);
        ListNode* r=rev(m);
                                 ListNode*c=head;
          while(r!=NULL){
               s=max(s,head->val+r->val);
               r=r->next;
               head=head->next;
           }
          return s;                       
    }
};