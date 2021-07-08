#include <bits/stdc++.h> 
using namespace std; 

ListNode* Solution::solve(ListNode* A) {
    
    int count[2] = {0, 0};
    ListNode *ptr = A;  
  
    while (ptr != NULL)  
    {  
        count[ptr->val] += 1;  
        ptr = ptr->next;  
    }  
  
    int i = 0;  
    ptr = A;  
    while (ptr != NULL)  
    {  
        if (count[i] == 0)  
            ++i;  
        else
        {  
            ptr->val = i;  
            --count[i];  
            ptr = ptr->next;  
        }  
    }
    
    return A;
}  