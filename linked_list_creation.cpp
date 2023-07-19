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
	
	ptr=head;
	while(ptr!=NULL)
	{
		cout<<ptr->data<<" "<<ptr->next<<endl;
		ptr=ptr->next;
	}
	
}
