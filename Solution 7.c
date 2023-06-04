/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB)
{
struct ListNode *temp1=headA,*temp2=headB,*ans=NULL;
while(temp1!=NULL)
{
    temp2=headB;
    while(temp2!=NULL)
    {
        if(temp1==temp2)
        {
            ans=temp1;
            break;
        }       
        temp2=temp2->next;
    }
    if(ans!=NULL)
        break;
    temp1=temp1->next;
}    
return ans;
}
