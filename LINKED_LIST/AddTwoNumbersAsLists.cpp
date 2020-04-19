/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::addTwoNumbers(ListNode* A, ListNode* B) {
    
     if(A == NULL){
        return B;
    }
    else if(B == NULL){
        return A;
    }
    
    // reversing the list
    
    ListNode* currA = A;
    ListNode* currB = B;
    
    ListNode* ans = NULL;
    ListNode* head;
    
    int sum, carry = 0, value;
    while(currA != NULL && currB != NULL){
        sum = currA->val + currB->val + carry;
        carry = sum/10;
        value = sum%10;
        
        ListNode* store = new ListNode(value);
        
        if(ans == NULL){
            ans = store;
            head = ans;
        }
        else{
            ans->next = store;
            ans = store;
        }
        currA = currA->next;
        currB = currB->next;
    }
    
    if(currA == NULL){
        while(currB != NULL){
            sum = currB->val + carry;
            carry = sum/10;
            value = sum%10;
            
            ListNode* store = new ListNode(value);
            
            ans->next = store;
            ans = store;
            
            currB = currB->next;
        }
    }
    else if(currB == NULL){
        while(currA != NULL){
            sum = currA->val + carry;
            carry = sum/10;
            value = sum%10;
            
            ListNode* store = new ListNode(value);
            
            ans->next = store;
            ans = store;
            
            currA = currA->next;
        }
    }
    
    if(carry != 0){
        ListNode* store = new ListNode(carry);
        
        ans->next = store;
        ans = store;
    }

    return head;
}
/*
ListNode* Solution::addTwoNumbers(ListNode* A, ListNode* B) {
ListNode *X=new ListNode(0);
ListNode *C=X;
int carry=0;
while(A || B)
{
    int a=0;
    if(A!=NULL)
    {
        a=A->val;
        A=A->next;
    }
    int b=0;
    if(B!=NULL)
    {
        b=B->val;
        B=B->next;
    }
    int res=(a+b+carry);
    carry=res/10;
    res%=10;
    
    ListNode *n= new ListNode(res);
    C->next=n;
    C=n;
    
}
if(carry)
{
    
    C->next=new ListNode(carry);
}
return X->next;
}    */
