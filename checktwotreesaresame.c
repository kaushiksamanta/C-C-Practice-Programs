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
int checksametrees(struct node* tree1,struct node* tree2)
{
	if(tree1==NULL&&tree2==NULL)
	{
		return 1;
	}
	if(tree1!=NULL && tree2!=NULL)
	{
		return (checksametrees(tree1->left,tree2->left)&&
	checksametrees(tree1->right,tree2->right)&&tree1->data==tree2->data);
	}
	return 0;
}
void  deletetree(struct node* root)
{
	if(root==NULL)
	{
		return;
	}
	deletetree(root->left);
	deletetree(root->right);
	free(root);
}
int main()
{
	struct node *root1 = newnode(1);
	root1->left=newnode(2);
	root1->right=newnode(3);
	root1->left->left = newnode(4);
	root1->right->right = newnode(5);
	struct node *root2 = newnode(1);
	root2->left=newnode(2);
	root2->right=newnode(3);
	root2->left->left = newnode(4);
	root2->right->right = newnode(5);
	if(checksametrees(root1,root2))
	{
		printf(" these both trees are same");
	}
	else
	{
		printf("these trees are not same");
	}
	return 0;
}
