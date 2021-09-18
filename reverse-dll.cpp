#include<stdio.h>
#include<stdlib.h>	
struct node //linked list
{
	int data;
	struct node *next,*prev;
};
struct node *first = NULL;
struct node *last = NULL;
void create_node(int ele)
{
	struct node *temp = (struct node*)malloc(sizeof(struct node));
	if(first == NULL)
	{
		temp -> data = ele;
		temp-> next = NULL;
		temp->prev=NULL;
		first = last = temp;
	}
	else
	{
		temp -> data = ele;
		temp-> next = NULL;
		last->next =temp;
		temp -> prev = last;
		last = temp;
	}
}
void reverse()
{
     struct node *temp = NULL; 
     struct node *current = first;
      
     while (current !=  NULL)
     {
       temp = current->prev;
       current->prev = current->next;
       current->next = temp;             
       current = current->prev;
     }     
     if(temp != NULL )
        first = temp->prev;
}    
void display()
{
	struct node *temp = first;
	if(temp==NULL)
	{
	    printf("List is empty\n");
	}
	else
	{
	    while(temp!=NULL)
	    {
		    printf("%d->",temp->data);
		    temp=temp->next;
	    }
	}
			
}
int main()
{
	int n;
	scanf("%d",&n);
	int a[n],i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		create_node(a[i]);
	}
	display();
	reverse();
	printf("\nReverse of the double linked list:\n");
	display();
	return 0;
}

