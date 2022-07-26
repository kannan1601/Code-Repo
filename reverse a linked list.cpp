#include<bits/stdc++.h>
using namespace std;
struct node
{
	int data;
	struct node *next;	
};
void reverse(struct node **head_ref)
{
	struct node *prev_node,*curnt_node,*next_node;
	prev_node=0;
	curnt_node=next_node=*head_ref;
	while(next_node!=0)
	{
		next_node=next_node->next;
		curnt_node->next=prev_node;
		prev_node=curnt_node;
		curnt_node=next_node;
	}
	*head_ref=prev_node;
}
void display(struct node **head_ref)
{
	struct node *temp=*head_ref;
	while(temp!=0)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}
int main()
{
	struct node *head,*newnode,*temp;
	head=NULL;
	int n;
	cout<<"enter how many nodes you want to create \n";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		cout<<"enter value: \n";
		cin>>newnode->data;
		newnode->next=0;
		if(head==0)
		{
			temp=head=newnode;
		}
		else
		{
			temp->next=newnode;
			temp=newnode;
		}
		
	}
	reverse(&head);
	display(&head);
}
