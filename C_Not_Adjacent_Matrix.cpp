#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int gcd(int a,int b)
{ if(b==0) return a; else{ return gcd(b,a%b); } }
bool isPrime(ll n)
{ if(n==1) return false; else { for(ll i = 2;i*i<=n;i++) { if(n%i==0)return false; } return true; } }
void solve()
{	
	ll n;
  cin>>n;
  if(n == 1)
  cout<<"1\n";
  else if(n == 2)
  cout<<"-1\n";
  else
  {
    
    vector<vector<int>> ans(n,vector<int>(n,0));
    int val = 1, val2 = 2;
    for(int i = 0; i < n; i++)
    {
      for(int j = 0; j < n; j++)
      {
        if(val<= n*n)
        {
          ans[i][j] = val;
          val+=2;
        }
        else
        {
          ans[i][j] = val2;
          val2+=2;
        }
      }
    }
    for(int i = 0;i < n; i++)
    {
      for(int j = 0;j < n; j++)
      {
        cout<<ans[i][j]<<" ";
      }
      cout<<'\n';
    }
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

	
