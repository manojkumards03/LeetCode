/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeElements(struct ListNode* head, int val) {
   while (head != NULL && head->val == val) {
            head = head->next;
        }

        if (head == NULL) {
            return NULL;
        }

        struct ListNode* temp = head;
        struct ListNode* nextNode; 
        while (temp->next != NULL) {
            nextNode = temp->next;
            if (nextNode->val == val) {
                temp->next = nextNode->next;
            } else {
                temp = temp->next;
            }
        }
        return head;
}