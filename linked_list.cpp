#include<bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	struct node *next;
};
struct node *head;

void insert_beg();
void insert_end();
void delete_beg();
void delete_end();
void display();

int main()
{
	int ch;
	cout<<"Enter your choice : \n 1. Insertion at beginning\n 2. Insertion at the end\n 3. Deletion at the beginning\n 4. Deletion at the end\n 5.Display\n";		
	while(1<=9)
	{
	cin>>ch;
	switch(ch)
	{
		case 1:
			insert_beg();
		case 2:
			insert_end();
		case 3:
			delete_beg();
		//case 4:
		//	delete_end();
		//	break;
		case 5:
			display();
			break;
		default:
			cout<<"Wrong Choice";
	}
	}
}

	void insert_beg()
	{
		struct node *ptr;
		int item ;
		ptr=(struct node*)malloc(sizeof(struct node*));
		if(ptr== NULL)
		{
			cout<<"Overflow";
		}
		else
		{
			cout<<"Enter data\n";
			cin>>item;
			ptr->data=item;
			ptr->next=head;
			head=ptr;
		}
		cout<<"Insert_beg\n";
	}
	
	void insert_end()
	{
		struct node *ptr,*temp;
		int item;
		cout<<"Enter data\n";
		cin>>item;
		ptr=(struct node*)malloc(sizeof(struct node*));
		if(ptr== NULL)
		{
			cout<<"overflow";
		}
		else 
		{
			if(head==NULL)
			{
				ptr->data=item;
				ptr->next=NULL;
				head=ptr;
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
		cout<<"insert_End\n";
	}
	
	void delete_beg()
	{
		struct node *ptr;
		if(head==NULL)
		{
			cout<<"Underflow";
		}
		else
		{
			ptr=head;
			head=ptr->next;
			free(ptr);
			cout<<"delete_beg";
		}
	}
	
	void delete_end()
	{
		cout<<"delete_End";
	}
	
	void display()
	{
		struct node *ptr;
		ptr=head;
		if(ptr==NULL)
		{
			cout<<"Empty";
		}
		else
		{
			while(ptr->next!=NULL)
			{
				cout<<ptr->data<<" "<<ptr->next<<endl;
				ptr=ptr->next;
			}
		}
	} 
