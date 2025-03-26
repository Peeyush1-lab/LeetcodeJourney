#include <stdio.h>
struct ListNode {
    int val;
    struct ListNode *next;
};
struct ListNode* reverseList(struct ListNode* head) {

    struct ListNode *new_node, *temp = head,*rev_start = NULL;
    while (temp != NULL)
    {
        new_node = (struct ListNode *)malloc(sizeof(struct ListNode));
        new_node->val = temp->val;
        new_node->next = rev_start;
        rev_start = new_node;
        temp = temp->next;
    }
    return rev_start;
}