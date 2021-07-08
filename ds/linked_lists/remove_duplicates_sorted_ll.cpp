/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::deleteDuplicates(ListNode* A) {
    ListNode *curr = A;
    while(curr->next)
    {
        if(curr->val == curr->next->val)
        {
            ListNode *x = curr->next;
            if(curr->next->next != NULL)
            {
                curr->next = curr->next->next;
            }
            else
            {
                curr->next = NULL;
            }
            delete(x);
            
        }
        else
        {
            curr = curr->next;
        }
        
    }
    return A;
}