#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	struct node *next;
};

int main()
{
	struct node *head,*newnode,*temp;
	head=NULL;
	int n;
	cout<<"enter the no of nodes you want to create: ";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		cout<<"enter data"<<i<<"\n";
		cin>>newnode->data;
		newnode->next=0;
		if(head==0)
		{
			head=temp=newnode;
		}
		else
		
		{
			temp->next=newnode;
			temp=newnode;
		}
	}
	int x=0;
	cout<<"if you want enter new node beginning press 1";
	cin>>x;
	if(x)
	{
	newnode=(struct node*)malloc(sizeof(struct node));
	cout<<"enter new node value: ";
	cin>>newnode->data;
	newnode->next=head;
	head=newnode;
	}
	
	temp=head;
	while(temp!=0)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}
