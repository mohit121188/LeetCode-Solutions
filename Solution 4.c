/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeElements(struct ListNode* head, int val)
{
    if(head==NULL)
        return head;
    if(head->next==NULL)
    {
        if(head->val==val)
        {
            free(head);
            head=NULL;
        }
        return head;
    }
    struct ListNode *prev=NULL,*current=head,*next=head->next;
    while(current!=NULL)
    {
        if(current->val==val)
        {
            if(current==head)
            {
                head=head->next;
                free(current);
               
            }
            else
            {
                free(current);
                prev->next=next;
            }
        }
        else
        {
            prev=current;
        }
         current=next;
         if(next!=NULL)
            next=next->next;
    }
    return head;

}
