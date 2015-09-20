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
void mirror(struct node* node)
{
	if(node==NULL)
	{
		return;
	}
	mirror(node->left);
	mirror(node->right);
	struct node* temp=node->left;
	node->left=node->right;
	node->right=temp;
}
void printinorder(struct node* node)
{
	if(node==NULL)
	{
		return;
	}
	printinorder(node->left);
	printf("%d\t\n",node->data);
	printinorder(node->right);
}
int main()
{
	struct node *root1 = newnode(1);
	root1->left=newnode(2);
	root1->right=newnode(3);
	root1->left->left = newnode(4);
	root1->right->right = newnode(5);
	printf("inorder before mirror image");
	printinorder(root1);
	mirror(root1);
	printf("inorder after mirror image");
	printinorder(root1);
	return 0;
}
