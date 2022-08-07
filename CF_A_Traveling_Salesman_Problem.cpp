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
  int moves=0;
  vector<int> x(n),y(n);
  for(int i=0;i<n;i++)
  {
    cin>>x[i]>>y[i];
  }
  sort(x.begin(),x.end());
  sort(y.begin(),y.end());
 
  if(x[n-1]>0)
  {
    moves+=2*x[n-1];
   
  }
  if(x[0]<0)
  {
    moves+=2*abs(x[0]);
    
  }
  if(y[n-1]>0)
  {
    moves+=2*y[n-1];
   
  }
  if(y[0]<0)
  {
    moves+=2*abs(y[0]);
   
  }

  cout<<moves<<"\n";
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

	
