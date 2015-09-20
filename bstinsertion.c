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
struct node *insert(struct node * root,int key)
{
	if(root==NULL)
	{
		return newnode(key);
	}
	if(key<root->data)
	{
		root->left=insert(root->left,key);
	}
	else if(key>root->data)
	{
		root->right=insert(root->right,key);
	}
	return root;
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
	struct node *root=NULL;
	root=insert(root,1);
	insert(root,2);
	insert(root,4);
	insert(root,7);
	insert(root,9);
	insert(root,16);
	printinorder(root);
}
