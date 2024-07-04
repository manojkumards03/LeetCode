/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeElements(struct ListNode* head, int val) {
   while(head!=NULL && head->val==val)
{
head=head->next;
}
struct ListNode *pre = head;

while(pre!=NULL && pre->next)
{
if(pre->next->val != val)
pre=pre->next;
else
pre->next=pre->next->next;
}
return head;
}