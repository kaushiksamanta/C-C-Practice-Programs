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
struct node* arraytobalancedbinarytree(int arr[],int start,int end)
{
	if(start>end)
	{
		return NULL;
	}
	int mid=(start+end)/2;
	struct node* root = newnode(arr[mid]);
    root->left=arraytobalancedbinarytree(arr,start,mid-1);
	root->right=arraytobalancedbinarytree(arr,mid+1,end);
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
	int arr[]={1,2,3,4,5,6};
	int n=sizeof(arr)/sizeof(arr[0]);
	struct node* rootnode = arraytobalancedbinarytree(arr,0,n-1);
	printinorder(rootnode);
}
