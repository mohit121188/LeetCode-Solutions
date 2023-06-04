/*hint : you can use Floyd's cycle-finding algorithm, also known as the "tortoise and hare" algorithm, to solve this problem efficiently */

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode *head) 
{
   bool flag=false;
   if(head==NULL)
    flag=false;
   else
   if(head->next==NULL)
    flag=false;
    else
    if(head->next->next==NULL)
    flag=false;
    else
    {
        struct ListNode *slow=head,*fast=head->next->next;
        while(fast!=NULL&&fast->next!=NULL&&fast->next->next!=NULL)
        {
            if(fast==slow)
            {
                flag=true;
                break;
            }
            slow=slow->next;
            fast=fast->next->next;
        }
    }
return flag;
}
