/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
void inversion(struct TreeNode **proot)
{
    struct TreeNode *temp=NULL;
    if(*proot==NULL)
        return;
    temp=(*proot)->left;
    (*proot)->left=(*proot)->right;
    (*proot)->right=temp;
    inversion(&(*proot)->left);
    inversion(&(*proot)->right);
}
struct TreeNode* invertTree(struct TreeNode* root)
{
  if(root==NULL)
    return NULL;
  inversion(&root);
  return root;
}
