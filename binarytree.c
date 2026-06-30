#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *create()
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    int x;
    printf("\nenter value to enter in tree(-1 for no data):");
    scanf("%d", &x);
    if (x == -1)
    {
        return 0;
    }
    newnode->data = x;
    printf("\nenter left child of %d\n", x);
    newnode->left = create();
    printf("\nenter right child of %d\n", x);
    newnode->right = create();
    return newnode;
}
void preorder(struct node *root)
{
    if (root != NULL)
    {
        printf("%d ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}
void inorder(struct node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}
void postorder(struct node *root)
{
    if (root != NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->data);
    }
}
int main()
{
    struct node *root;
    root = 0;
    root = create();
    printf("\npreorder traversal is:");
    preorder(root);
    printf("\ninorder traversal is:");
    inorder(root);
    printf("\npostorder traversal is:");
    postorder(root);
    return 0;
}