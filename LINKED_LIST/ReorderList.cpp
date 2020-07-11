/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::reorderList(ListNode* A) {
    
// ***************************** SOLUTION 1*******************************************************
    ListNode* head = A;
    int length = 0;

    // Get length of the list

    while (A) {
        A = A -> next;
        length ++;
    }

    // Corner case

    if (length <= 2) {
        return head;   
    } 
    A = head;

    // Find the middle element for reversing the latter half
    
    ListNode* prev = NULL;
    if (length % 2 == 1) {
        for (int i = 0; i < length / 2 + 1; i ++) {
            prev = A;
            A = A -> next;
        }
    } else {
        for (int i = 0; i < length / 2; i ++) {
            prev = A;
            A = A -> next;
        }
    }

    // rotate the 2nd half of the list

    ListNode* next = NULL;
    ListNode* cur = A;
    ListNode* pre = NULL;
    while (cur && cur -> next) {
        next = cur -> next;
        cur -> next = pre;
        pre = cur;
        cur = next;
    }
    if (cur) {
        cur -> next = pre;
    }

    // Get the sequence by alternating nodes

    ListNode* tempNext;
    ListNode* tempNext2;
    ListNode* tempPre = NULL;
    ListNode* tempPre2 = NULL;
    bool toggle = false;
    ListNode* realHead = head;
    A = cur;
    if (length % 2 == 0) {
        while (head && head -> next && A && A -> next) {
            if (!toggle) {
                tempNext = head -> next;
                tempNext2 = A -> next;
                head -> next = A;
                head = tempNext;
                toggle = true;
            } else {
                tempNext = head -> next;
                tempNext2 = A -> next;
                A -> next = head;
                A = tempNext2;
                toggle = false;
            }
        }
        return realHead;
    } else {
        prev -> next = NULL;
        while (head && head -> next && A) {
            if (!toggle) {
                tempNext = head -> next;
                tempNext2 = A -> next;
                head -> next = A;
                head = tempNext;
                toggle = true;
            } else {
                tempNext = head -> next;
                tempNext2 = A -> next;
                A -> next = head;
                A = tempNext2;
                toggle = false;
            }
        }
        A -> next = prev;
        return realHead;
    }
}

//****************************************************SOLUTION 2******************************************************using STACK*******************

ListNode* head = A;
   stack<ListNode*> s;
   if(head == NULL || head->next == NULL || head -> next -> next == NULL)
         return A;
    int count=0,f=0;
        while(head!=NULL){
              head = head -> next;
              count++;
        }
        if(count%2!=0){
            count = count/2+1;
            f = 1;
        }else
            count/= 2;
            head = A;
 while(count--){
        head=head -> next;
    }
    while(head!=NULL){
        s.push(head);
        head=head -> next;
    }
    head=a;
    while(!s.empty()){
        ListNode* temp = head -> next;
         head->next = s.top();
         s.top() -> next = temp;
         head = temp;
         s.pop();
    }
         head -> next = NULL;
   return A;
}
