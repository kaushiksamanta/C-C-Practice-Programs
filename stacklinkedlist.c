#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
}*start=NULL;
struct node * startnode;
void insertintostack()
{
	char ch;
	do
	{
		struct node* new_node;
		struct node* current;
		printf("enter the data:");
		scanf("%d",&new_node->data);
		if(start==NULL)
		{
			start=new_node;
			current=new_node;
			startnode=new_node;
		}
		else
		{
			new_node->next=startnode;
			startnode=new_node;
		}
	ch = getchar();
	}while(ch!='n');
}
int topdata()
{
	struct node* n = startnode;
	return (n->data);
}
void delete()
{
	startnode=startnode->next;
	free(startnode);
}
int main()
{
	insertintostack();
	printf("%d",topdata());
	delete();
	printf("%d",topdata());
}

