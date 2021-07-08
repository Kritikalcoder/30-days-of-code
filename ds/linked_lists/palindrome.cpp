/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
int Solution::lPalin(ListNode* A) {
    // int num = A->val;
    // cout << num;
    ListNode *curr = A;
    ListNode *end = A;
    ListNode *mid = A;
    int i = 0;
    while (end != NULL) {
        i += 1;
        end = end->next;
        // cout << end->val;
        if (i%2 == 0 && end != NULL) { // even
            mid = mid->next;
        }
    }
    
    curr = mid->next;
    ListNode *prev = NULL;
    ListNode *next = NULL;
    while (curr != NULL) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    mid->next = prev;
    
    curr = A;
    mid = mid->next;
    while (mid != NULL) {
        if (mid->val != curr->val) return 0;
        mid = mid->next;
        curr = curr->next;
    }
    return 1;
}
