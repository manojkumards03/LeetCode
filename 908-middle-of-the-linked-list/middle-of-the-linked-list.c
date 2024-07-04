/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* middleNode(struct ListNode* head) {
    int count=0;
    struct ListNode* middle=head;
    while(head->next!=NULL){
        if(count%2==0)
            middle=middle->next;
        count=count+1;
        head=head->next;
    }
    return middle;
    
}