#include<bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	struct node *next;
};
struct node *head;

void insertbeg();
void insertend();
void deletebeg();
void deleteend();
void display();

int main()
{
	int i=1;
	struct node *ptr,*first, *second, *third, *fourth, *fifth;
	first=(struct node*)malloc(sizeof(struct node*));	
	second=(struct node*)malloc(sizeof(struct node*));
	third=(struct node*)malloc(sizeof(struct node*));
	fourth=(struct node*)malloc(sizeof(struct node*));
	fifth=(struct node*)malloc(sizeof(struct node*));
	
	head=first;
	
	first->data=10;
	first->next=second;
	
	second->data=11;
	second->next=third;
	
	third->data=12;
	third->next=fourth;
	
	fourth->data=13;
	fourth->next=fifth;
	
	fifth->data=14;
	fifth->next=NULL;
	
	cout<<"Your Choices are : \n 1. Insertion at the beginning \n 2. Insertion at the end \n 3. Deletion at the beginning \n 4. Deletion at the end \n 5. Display\n";
	
	int ch;
	while(i<=5)
	{
		cout<<"Enter Choice\n";
		cin>>ch;
		
		switch(ch)
		{
			case 1:
				insertbeg();
				break;
			
			case 2:
				insertend();
				break;
				
			case 3:
				deletebeg();
				break;
				
			case 4:
				deleteend();
				break;
			
			case 5:
				display();
				break;
				
			default:
				cout<<"Wrong choice";
		}
	}
	i++;
}

void insertbeg()
{
	struct node *ptr;
	int item;
	ptr=(struct node *)malloc(sizeof(struct node *));
	if(ptr==NULL)
	{
		cout<<"Overflow";
	}
	else 
	{
		cout<<"Enter data\n";
		cin>>item;
		if(head==NULL)
		{
			head=ptr;
			ptr->data=item;
			ptr->next=NULL;
		}
		else 
		{
			ptr->data=item;
			ptr->next=head;
			head=ptr;
		}
	}
	cout<<"Node Inserted at the beginning\n";
}

void insertend()
{
	struct node *ptr, *temp;
	int item;
	ptr=(struct node *)malloc(sizeof(struct node*));
	if(ptr==NULL)
	{
		cout<<"Overflow";
	}
	else 
	{
		cout<<"Enter data\n";
		cin>>item;
		ptr->data=item;
		if(head==NULL)
		{
			head=ptr;
			ptr->next=NULL;
		}
		else
		{
			temp=head;
			while(temp->next!=NULL)
			{
				temp=temp->next;
			}
			temp->next=ptr;
			ptr->next=NULL;
		}
	}
	cout<<"Node Inserted at the End\n";
}

void deletebeg()
{
	struct node *ptr;
	if(head==NULL)
	{
		cout<<"Linked List is empty\n";		
	}
	else
	{
		ptr=head;
		if(ptr->next==NULL)
		{
			head=NULL;
			free(ptr);
		}
		else
		{
			head=ptr->next;
			free(ptr);
		}
	}
	cout<<"Node deleted from the beginning\n";
}

void deleteend()
{
	struct node *ptr, *ptr1;
	ptr=head;
	if(head==NULL)
	{
		cout<<"Linked List is Empty\n";
	}
	else
	{
		if(ptr->next==NULL)
		{
			head=NULL;
			free(ptr);
			cout<<"Node Deleted\n";
		}
		else
		{
			while(ptr->next!=NULL)
			{
				ptr1=ptr;
				ptr=ptr->next;
			}
			ptr1->next=NULL;
			free(ptr);
			cout<<"Node Deleted from the End\n";
		}
	}
}

void display()
{
	struct node *ptr;
	ptr=head;
	if(ptr==NULL)
	{
		cout<<"Linked list is Empty\n";
	}
	else
	{
		cout<<"The linked list is\n";
		while(ptr!=NULL)
		{
			cout<<ptr->data<<" "<<ptr->next<<endl;
			ptr=ptr->next;
		}
	}
}






