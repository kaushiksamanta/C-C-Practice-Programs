#include<stdio.h>
struct node
{
	unsigned int data;
	struct node *left;
	struct node *right;
};
node *newnode(int k)
{
    node *node1 = new node;
    node1->data = k;
    node1->right = node1->left = NULL;
    return node1;
}
void inorder( struct node *root ) 
{
    if (root != NULL) 
	{
        inorder(root->left);
        printf("%c\t", root->data);
        inorder(root->right);
    }
}
int main()
{
	struct node *root=newnode(1);
	root->left=newnode(2);
	root->right=newnode(3);
	root->left->left=newnode(4);
	root->left->right=newnode(5);
	root->right->left=newnode(6);
	root->right->right=newnode(7);
	inorder(root);
	return 0;
}

