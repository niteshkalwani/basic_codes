#include<stdio.h>
struct bstnode
{
    int data;
    struct bstnode* left;
    struct bstnode* right;
};
struct bstnode* makenewnode(int data)
{
    struct bstnode* newnode= (struct bstnode*)malloc(sizeof(struct bstnode*));
    newnode->data=data;
    newnode->left=newnode->right=NULL;
    return newnode;
}
struct bstnode* insert(struct bstnode* root,int data)
{
    if(root==NULL)
        root= makenewnode(data);
    else if(data<=root->data)
        root->left=insert(root->left,data);
    else
        root->right=insert(root->right,data);
    return root;
}
bool search(struct bstnode* root,data)
{
    if(root==NULL)
        return false;
    else if(root->data==data)
        return true;
    else if(data<=root->data)
        return(search(root->left,data));
    else
        return(search(root->right,data));
}
struct bstnode* findmin(struct bstnode* root)
{
    while(root->left!=NULL) root=root->left;
    return root;
}
struct bstnode* del(struct bstnode* root,int data)
{
    if(root==NULL) return root;
    else if(data<root->data) root->left=del(root->left,data);
    else if(data>root->data) root->right=del(root->right,data);
    else
    {
        if(root->left==NULL && root->right==NULL)
        {
            free root;
            root=NULL;
        }
        else if(root->left ==NULL)
        {
            struct bstnode* temp=root;
            root=root->right;
            free temp;

        }
         else if(root->right ==NULL)
        {
            struct bstnode* temp=root;
            root=root->left;
            free temp;

        }
        else
        {
            struct bstnode* temp= findmin(root->right);
            root->data=temp->data;
            root->right=del(root->right,temp->data);

        }
    }
    return root;
}

int main()
{
    struct bstnode* root=NULL;
    root=insert(root,10);
    root=insert(root,6);
    root=insert(root,15);
    root=insert(root,25);

    root=del(root,10);
}
