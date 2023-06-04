/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
int getDecimalValue(struct ListNode* head)
{
struct ListNode *temp=head;
int n=0,ans=0;
while(temp!=NULL)
{
    n++;
    temp=temp->next;
}
temp=head;
while(temp!=NULL)
{
n=n-1;
ans=ans+(temp->val)*pow(2,n);
temp=temp->next;
}
return ans;
}
