#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
}*start=NULL;
struct node * startnode;
void create()
{
char ch;
 do
 {
  struct node *new_node,*current;
  new_node=(struct node *)malloc(sizeof(struct node));
  printf("\nEnter the data : ");
  scanf("%d",&new_node->data);
  new_node->next=NULL;
  if(start==NULL)
  {
  startnode=new_node;
  start=new_node;
  current=new_node;
  }
  else
  {
  current->next=new_node;
  current=new_node;
  }

 printf("\nDo you want to creat another : ");
 ch=getche();
 }while(ch!='n');
}
void insert_from_beginning()
{
	char c;
	do
	{
		struct node *new_node;
		new_node=(struct node *)malloc(sizeof(struct node));
		printf("\nEnter the data:");
		scanf("%d",&new_node->data);
		new_node->next=startnode;
		startnode=new_node;
		printf("\n Do you want to create another : ");
		c=getche();
	}while(c!='n');
}
void display()
{
struct node *new_node;
 printf("\nThe Linked List : \n");
 new_node=startnode;
 while(new_node!=NULL)
   {
   printf("%d--->",new_node->data);
   new_node=new_node->next;
   }
  printf("NULL");
}
void delete()
{
	int x;
	printf("Enter the element to delete");
	scanf("%d",&x);
	struct node *temp, *prev;
    temp=startnode;
    while(temp!=NULL)
    {
    if(temp->data==x)
    {
        if(temp==startnode)
        {
        startnode=temp->next;
        free(temp);
        }
        else
        {
        prev->next=temp->next;
        free(temp);
        }
    }
    else
    {
        prev=temp;
        temp= temp->next;
    }
    }
}
void main()
{
create();
insert_from_beginning();
display();
delete();
display();
getch();
}

