/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
int getDecimalValue(struct ListNode* head) {
    int result=0;
     struct ListNode* current = head;
    while (current) {
        result = result << 1 | current->val;
        current = current->next;
    }
    return result;
    
}