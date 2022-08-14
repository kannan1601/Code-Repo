#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int gcd(int a,int b)
{ if(b==0) return a; else{ return gcd(b,a%b); } }
	
void solve()
{
	int n;
  cin>>n;
  vector<int>a(n);
  vector<int>b(n);
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
    b[i]=a[i];
  }
  sort(b.begin(),b.end());
  int k=0;
  int x=0,j=n-1;
  while(x<=j)
  {
    if(a[x]!=b[k] && a[j]!=b[k])
    {
      cout<<"NO\n";
      return;
    }
    else
    {
      if(a[x]==b[k])
      {
        x++;
      }
      else
      {
        j--;
      }
      k++;
    }
  }
  cout<<"YES\n";
  
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

	
