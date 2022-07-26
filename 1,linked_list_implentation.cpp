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

	temp=head;
	for(int i=1;i<=n+1;i++)
	{
		cout<<temp->data<<"\n";
		temp=temp->next;
	}

}
