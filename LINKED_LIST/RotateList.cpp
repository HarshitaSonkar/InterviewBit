/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::rotateRight(ListNode* A, int B) {
    
    ListNode* curr = A;
    ListNode* head = A;
    ListNode* last;
    
    int length = 0;
    
    if(B == 0 || A == NULL){
        return A;
    }
    
    while(curr != NULL){
        last = curr;
        curr = curr->next;
        length++;
    }
    
    while(B >= length){
        B = B - length;
    }
    
    B = length - B;
    
    last->next = head;
    // now, its a circular list
    
    curr = A;
    
    while(B != 0){
        last = curr;
        curr = curr->next;
        B--;
    }
    
    head = curr;
    last->next = NULL;
    
    return head;

}
