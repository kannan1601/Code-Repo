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
  int n,k;
  cin>>n>>k;
  string s;
  cin>>s;
  vector<int>p_sum(n+1);
  for(int i = 1; i <= n; i++)
  {
    p_sum[i] = p_sum[i-1] + (s[i-1]=='W');
  }
  int answer = INT_MAX;
  for(int i = k; i <= n; i++)
  {
    answer = min(answer,(p_sum[i] - p_sum[i-k]));
  }
  cout<<answer<<'\n';
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

	
