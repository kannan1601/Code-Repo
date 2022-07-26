#include<bits/stdc++.h>
using namespace std;
struct node
{
	int data;
	struct node *next;	
};
int main()
{
	struct node *head,*newnode,*temp;
	head=NULL;
	int n;
	cout<<"enter the no of node you want to create: ";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		cout<<"enter data\n";
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
	temp=head;
	int x=0;
	cout<<"do u want to enter node at the end press 1\n";
	cin>>x;
	if(x)
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		cout<<"enter the value you want to insert ";
		cin>>newnode->data;
		newnode->next=0;
		
		while(1)
		{
			if(temp->next==0)
			break;
			else
			{
				temp=temp->next;
			}
		}
		temp->next=newnode;
		temp=head;
		while(temp!=0)
		{
			cout<<temp->data<<" ";
			temp=temp->next;
		}
		
	}
}
