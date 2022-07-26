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
	cout<<"enter no of nodes you want to create:\n";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		cout<<"enter data"<<i<<" ";
		cin>>newnode->data;
		newnode->next=NULL;
		if(head==NULL)
		{
			head=temp=newnode;
		}
		else
		{
			temp->next=newnode;
			temp=newnode;
		}
	}
//	int n2;
//	cout<<"press 1 if you want to insert a node at beginning ";
//	cin>>n2;
//	if(n2==1)
//	{
//		newnode=(struct node*)malloc(sizeof(struct node));
//		cout<<"enter data you want insert ";
//		cin>>newnode->data;
//		newnode->next=head;
//		head=newnode;
//	}
	temp=head;
	for(int i=1;i<=n+1;i++)
	{
		cout<<temp->data<<"\n";
		temp=temp->next;
	}

}
