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
bool checkleafnode(struct node* root)
{
	if(root->left==NULL&&root->right==NULL)
	{
		return true;
	}
}
int addleafnode(struct node* rootnode)
{
	int sum=0;
	if(rootnode!=NULL)
	{
		if(checkleafnode(rootnode)==true)
		{
			sum=sum+rootnode->data;
		}
		else
		{
			addleafnode(rootnode->left);	
		}
		addleafnode(rootnode->right);
	}
	return sum;
}
int main()
{
	struct node* root = newnode(1);
	root->left =newnode(2);
	root->right =newnode(3);
	printf("%d",addleafnode(root));
	return 0;
}
