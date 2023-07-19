#include<bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	struct node *next;
};

struct node *head;

int main()
{
	int data;
	struct node *first, *second, *third, *fourth, *ptr, *next;
	
	first= (struct node*)malloc(sizeof(struct node*));
	second= (struct node*)malloc(sizeof(struct node*));
	third= (struct node*)malloc(sizeof(struct node*));
	fourth= (struct node*)malloc(sizeof(struct node*));
	
	head = first;
	
	first->data=1;
	first->next=second;
	
	second->data=2;
	second->next=third;
	
	third->data=3;
	third->next=fourth;
	
	fourth->data=4;
	fourth->next=NULL;
	
	ptr=head;
	while(ptr!=NULL)
	{
		cout<<"data "<<ptr->data<<" "<<"next "<<ptr->next<<endl;
		ptr=ptr->next;
	}
}
