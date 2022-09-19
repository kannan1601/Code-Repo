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
	ll a,b;
  cin >> a >> b;
  if(a > b)
  {
    swap(a,b);
  }
  cout<<b - a<<" ";
  if(a == b)cout<<"0\n";
  else
  {
   cout<<min(a % (b-a), b-a-(a %( b -a)))<<'\n';
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

	
