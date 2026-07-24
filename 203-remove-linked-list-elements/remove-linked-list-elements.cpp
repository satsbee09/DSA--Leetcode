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
    ListNode* removeElements(ListNode* head, int val) {
      if(head==NULL) return head;
      if(head->next==NULL){
        if(head->val==val) return NULL;
        else{
            return head;
        }
      }
      ListNode*dummy=new ListNode(-1);
       dummy->next=head;
       ListNode*temp=dummy;
      while(temp->next!=NULL){
        if(temp->next->next!=NULL){
        if(temp->next->val==val ){
            ListNode*curr=temp->next;
            temp->next=curr->next;
            curr->next=NULL;
            delete(curr);
        }
        else{
             temp=temp->next;
        }
    
      }
      else{
        if( temp->next->val==val  ){
            ListNode*curr=temp->next;
            temp->next=NULL;
            delete(curr);
        }
        else{
             temp=temp->next;
        }

      } 
      
        
    }
    return dummy->next;
    }

};