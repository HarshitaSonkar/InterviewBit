/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
int Solution::lPalin(ListNode* A) {
     
        
        ListNode *temp=A;
stack<ListNode*> s;
while(temp!=NULL)
{
    s.push(temp);
    temp=temp->next;
}

while(!s.empty())
{
    if(s.top()->val!=A->val)
    {
        return 0;
    }
    s.pop();
    A=A->next;
}
return 1;
}
        
        
