/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode* searchBST(struct TreeNode* root, int val)
{
    struct TreeNode *temp=NULL;
    if(root==NULL)
        return NULL;
    temp=root;
    while(temp!=NULL)
    {
        if(val==temp->val)
            break;
        if(val<temp->val)
            temp=temp->left;
        else
            temp=temp->right;
    }
    if(temp==NULL)
        return NULL;
    else
        return temp;
    }
