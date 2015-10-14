#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node 
{
	int data;
	struct node *next;
};
int printmiddlelinkedlist(struct node *head)
{
	struct node * fastptr = head;
	struct node * slowptr = head;
	if(head!=NULL)
	{
		while(fastptr!=NULL && fastptr->next!=NULL)
		{
			fastptr=fastptr->next->next;
			slowptr=slowptr->next;
		}
		return (slowptr->data);
	}
}
struct node *newnode(int data)
{
	struct node * n =(struct node *)malloc(sizeof(struct node));
	n->data=data;
	n->next=NULL;
	return n;
}
int main()
{
	struct node * linked = newnode(1);
	linked->next=newnode(2);
	linked->next->next=newnode(3);
	linked->next->next->next=NULL;
	printf("%d",printmiddlelinkedlist(linked));
	return 0;
}
