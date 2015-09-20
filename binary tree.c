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
void printpreorder(struct node* node)
{
	if(node==NULL)
	{
		return;
	}
	printf("%d\t\n",node->data);
	printpreorder(node->left);
	printpreorder(node->right);
}
void printpostorder(struct node* node)
{
	if(node==NULL)
	{
		return;
	}
	printpostorder(node->left);	
	printpostorder(node->right);
	printf("%d\t\n",node->data);
}
int main()
{
	struct node *root = newnode(1);
	root->left=newnode(2);
	root->right=newnode(3);
	root->left->left = newnode(4);
	printinorder(root);
	printpreorder(root);
	printpostorder(root);
	getchar();
	return 0;
}
