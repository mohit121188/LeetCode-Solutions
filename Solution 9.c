/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2)
{
struct ListNode *merge=NULL,*last=NULL;
struct ListNode *temp1=list1,*temp2=list2;
if(list1==NULL&&list2==NULL)
    merge=NULL;
else
if(list1==NULL&&list2!=NULL)
    merge=list2;
else
if(list1!=NULL&&list2==NULL)
    merge=list1;
else
{
    while(1)
    {
        if(temp1==NULL&&temp2!=NULL)
            {
            last->next=temp2;
            break;
            }
        else
        if(temp1!=NULL&&temp2==NULL)
            {
            last->next=temp1;
            break;
            }
        else
        if(temp1->val<=temp2->val)
        {
            if(merge==NULL)
            {
                merge=temp1;
                last=temp1;
                temp1=temp1->next;
                last->next=NULL;
            }
            else
            {
                last->next=temp1;
                last=temp1;
                temp1=temp1->next;
                last->next=NULL;
            }
        }
        else
        if(temp2->val<=temp1->val)
        {
             if(merge==NULL)
            {
                merge=temp2;
                last=temp2;
                temp2=temp2->next;
                last->next=NULL;
            }
            else
            {
                last->next=temp2;
                last=temp2;
                temp2=temp2->next;
                last->next=NULL;
            }
        }
        
        }
}
return merge;
}
