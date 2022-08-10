#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int gcd(int a,int b)
{ if(b==0) return a; else{ return gcd(b,a%b); } }
	
void solve()
{
	int n,m;
	cin>>n>>m;
	vector<vector<char>> a(n,vector<char>(m,'a'));
	
	int count=1;
	int top=0,bottom=n-1,right=m-1,left=0;
	while(left<=right && top<=bottom)
	{
		//first row	
		for(int i=left;i<=right;i++)
		{
			if(count%2==1)
			   a[top][i]='X';
			else
		     a[top][i]='O';
		}
		top++;
		//last col
		for(int i=top;i<=bottom;i++)
		{
			if(count%2==1)
				a[i][right]='X';
			else
				a[i][right]='O';
		}
		right--;
		//last row
		for(int i=right;i>=left;i--)
		{
			if(count%2==1)
			a[bottom][i]='X';
			else
			a[bottom][i]='O';
		}
		bottom--;
		//first col
		for(int i=bottom;i>=top;i--)
		{
		  if(count%2==1)
			  a[i][left]='X';
			else
				a[i][left]='O';
		}
		left++;
		count++;

	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<"\n";
	}
}


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		solve();
	}
}

	
