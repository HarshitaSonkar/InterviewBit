/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::deleteDuplicates(ListNode* A) {
    
    ListNode* l=A;
    
    if(!l || !l->next)
      return l;
      
    while(l){
        if(l->next && l->val==l->next->val)
            l->next=l->next->next;
        
        else
        l=l->next;
    }
    return A;
}
