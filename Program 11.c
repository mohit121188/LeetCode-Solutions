/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
 void inorderTraversal(struct TreeNode *root,struct TreeNode **proot1)
 {
    static struct TreeNode *root_right=NULL,*temp=NULL;   
     if(root==NULL)
        return;
    inorderTraversal(root->left,proot1);
    if(*proot1==NULL)
    {
        root_right=root->right;
        temp=root;
        *proot1=temp;
        temp->left=NULL;
        temp->right=NULL;
    }
    else
    {
        root_right=root->right;
        temp->right=root;
        temp=root;
        temp->right=NULL;
        temp->left=NULL;
    }
    inorderTraversal(root_right,proot1);
 }
struct TreeNode* increasingBST(struct TreeNode* root)
{
    struct TreeNode *root1=NULL;
    if(root==NULL)
    {
        return NULL;
    }
    inorderTraversal(root,&root1);
    return root1;
}
