#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *left;
	struct node *right;
};
struct node *newnode(int data)
{
	struct node *node=(struct node *)malloc(sizeof(struct node));
	node->data=data;
	node->left=NULL;
	node->right=NULL;
	return node;
}
int size(struct node* node)
{
	if(node==NULL)
	{
		return;
	}
	int sum=size(node->left)+1+size(node->right);
	return sum;
}
int main()
{
	struct node *root = newnode(1);
	root->left=newnode(2);
	root->right=newnode(3);
	root->left->left = newnode(4);
	root->right->right = newnode(5);
	printf("%d",size(root));
	return 0;
}
