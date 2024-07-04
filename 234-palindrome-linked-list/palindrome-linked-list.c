/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* reverseList(struct ListNode* head)
{
    if(head==NULL || head->next==NULL)
        return head;
    
    struct ListNode* headnew=(struct ListNode*)malloc(sizeof(struct ListNode));
    headnew->val=head->val;
    headnew->next=NULL;
    head=head->next;
    while(head!=NULL){
        struct ListNode* tmp=headnew;
        headnew=head;            
        head=head->next;
        headnew->next=tmp;
    }
    return headnew;
}


bool isPalindrome(struct ListNode* head) {
    if(head->next == NULL)
        return true;
    if(head->next->next == NULL)
        return (head->val == head->next->val) ? true :  false;
    
    struct ListNode* slow = head;
    struct ListNode* fast = head;
    
    while(fast->next != NULL && fast->next->next != NULL){
        fast=fast->next->next;
        slow=slow->next;
    }
    
    struct ListNode* reversed = reverseList(slow->next);
    
    while(head != NULL && reversed != NULL){
        if(head->val != reversed->val)
            return false;
        head = head->next;
        reversed = reversed->next;
    }
    return true;
}