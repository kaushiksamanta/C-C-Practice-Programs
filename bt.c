#include<stdio.h>
struct node
{
	unsigned int data;
	struct node *left;
	struct node *right;
};
Node *newNode(int k)
{
    Node *node = new Node;
    node->key = k;
    node->right = node->left = NULL;
    return node;
}
void inorder( struct node *root ) {
    if (root != NULL) {
        inorder(root->left);
        printf("%c\t", root->data);
        inorder(root->right);
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

