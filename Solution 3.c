/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool isPalindrome(struct ListNode* head)
{
    bool flag=false;
    if(head==NULL)
        flag=false;
    else
    if(head->next==NULL)
        flag=true;
    else
    {
        struct ListNode *rev=NULL,*temp1=head,*temp2=NULL;
        while(temp1!=NULL)
        {
            struct ListNode *new=(struct ListNode *)malloc(sizeof(struct ListNode));
            new->val=temp1->val;
            if(rev==NULL)
            {
                rev=new;
                rev->next=NULL;
            }
            else
            {
                new->next=rev;
                rev=new;
            }
            temp1=temp1->next;
        }
        temp1=head;
        temp2=rev;
        while(temp1!=NULL)
        {
            if(temp1->val!=temp2->val)
            {
                flag=false;
                break;
            }
            temp1=temp1->next;
            temp2=temp2->next;
        }
        if(temp1==NULL)
        {
            flag=true;
        }
    }
    return flag;
}
