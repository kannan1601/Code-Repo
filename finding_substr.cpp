#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int gcd(int a,int b)
{ if(b==0) return a; else{ return gcd(b,a%b); } }
	
void solve()
{
	string s="kannan";
	string s2="nan";
	int len = s.length()-s2.length();
	for(int i=0;i<=len;i++)
	{
		int j;
		for(j=0;j<s2.length();j++)
		{
			if(s[i+j]!=s2[j])
			break;
		}
		if(j==s2.length())
		{
			cout<<"found";
			return;
		}
	}
	cout<<"not found";
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

	
