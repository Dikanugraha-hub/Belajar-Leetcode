/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) {
    if (head == NULL || head->next == NULL) {
        return head;
    } 

    struct ListNode* saatIni = head;

    while (saatIni != NULL && saatIni->next != NULL) {
        if (saatIni->val == saatIni->next->val) {
            struct ListNode* simpanNode = saatIni->next;
            saatIni->next = saatIni->next->next;
            free(simpanNode);
        } else {
            saatIni = saatIni->next;
        }
    }
    return head;
}