#include<stdio.h>
#include<stdlib.h>	
struct node //linked list
{
	int data;
	struct node *next;
};
struct node *first = NULL;
struct node *last = NULL;
void create_node(int ele)
{
	struct node *news = (struct node*)malloc(sizeof(struct node));
	if(first == NULL)
	{
		news -> data = ele;
		news-> next = NULL;
		first = last = news;
	}
	else
	{
		news -> data = ele;
		news-> next = NULL;
		last -> next = news;
		last = news;
	}
}
void reverse()
{
    struct node* prev = NULL;
    struct node* current = first;
    struct node* next = NULL;
    while (current != NULL) {
        // Store next
        next = current->next;
 
        // Reverse current node's pointer
        current->next = prev;
 
        // Move pointers one position ahead.
        prev = current;
        current = next;
    }
    first = prev;
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
	printf("\nReverse of the single linked list:\n");
	display();
	
	return 0;
}

