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
	int n;
  cin>>n;
  string s;
  cin>>s;
  int l;
  cin>>l;
  int spl[26]={0};
  char x;
  for(int i = 0; i < l; i++)
  {
    cin>>x;
    spl[x-'a']++;
  }
  int count = 0;
  int ans = 0;
  for(int  i = 0; i < n; i++)
  {
    if(spl[s[i] - 'a']!=0)
    {
      ans = max(ans,count);
      count=1;
    }
    else
    count++;
  }
  cout<<ans<<"\n";
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

	
