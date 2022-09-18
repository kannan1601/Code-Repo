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
	int l,a,b;
  cin>>l>>a>>b;
  string s;
  cin>>s;
  int ans = a*l;
  if(b >= 0)
  {
    ans+=b*l;
    cout<<ans<<"\n";
  }
  else
  {
    int grp = 0;
    for(int i = 0; i < l - 1; i++)
    {
        if(s[i] != s[i+1])grp++;
    }
    grp++;
    ans+=((grp/2)+1) * b;
    cout<<ans<<'\n';

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

	
