/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head)
{
struct ListNode *temp1=NULL,*temp2=NULL,*prev=NULL;
int flag=0;
if(head==NULL)
    return head;
else
if(head->next==NULL)
    return head;
temp1=head;
prev=head;
temp2=head->next;
while(temp1!=NULL)
{
    temp2=head;
    flag=0;
    while(temp2!=temp1)
    {
        if(temp2->val==temp1->val)
        {
            prev->next=temp1->next;
            flag=1;
            free(temp1);
            break;
        }
        else
        {
            temp2=temp2->next;
        }
        
    }
    if(flag==1)
        temp1=prev->next;
    else
        {
            prev=temp1;
            temp1=temp1->next;
        }
}
return head;
}
