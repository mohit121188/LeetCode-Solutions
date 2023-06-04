/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head){
    if(head==NULL)
        return NULL;
    else
    if(head->next==NULL)
        return head;
    else
    {
        struct ListNode *current=head,*next=NULL;
        head=NULL;
        while(current!=NULL)
        {
            next=current->next;
            if(head==NULL)
            {
                head=current;
                head->next=NULL;
            }
            else
            {
                current->next=head;
                head=current;
            }
            current=next;
        }
        return head;
    }

}
