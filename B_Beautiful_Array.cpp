#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int gcd(int a,int b)
{ if(b==0) return a; else{ return gcd(b,a%b); } }
	
void solve()
{
  ll n,k,beauty,sum;
  cin>>n>>k>>beauty>>sum;
  if(sum < k*beauty || sum > (k*beauty)+(k-1)*n)
  {
    cout<<"-1\n";
    return;
  }
  ll ans[n];
  for(int i=0;i<n;i++)
  ans[i] = 0;

  ans[0] = k*beauty;
  sum-=k*beauty;
  for(int i=0;i<n;i++)
  {
    ll cur = min(k-1,sum);
    ans[i]+=cur;
    sum-=cur;
  }
  for(int i=0;i<n;i++)
  cout<<ans[i]<<" ";
  cout<<"\n";
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

	
