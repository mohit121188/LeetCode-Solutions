/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* middleNode(struct ListNode* head)
{
struct ListNode *temp=head;
int n=0,mid;
if(head==NULL)
    return NULL;
if(head->next==NULL)
    return head;
while(temp!=NULL)
{
    n++;
    temp=temp->next;
}
if(n%2!=0)
    mid=(n+1)/2;
else
    mid=(n+2)/2;
temp=head;
for(n=1;n<mid;n++)
{
temp=temp->next;
}
return temp;
}
