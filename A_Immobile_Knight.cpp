#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lld long long double
#define pb push_back
int gcd(int a,int b)
{ if(b==0) return a; else{ return gcd(b,a%b); } }
bool isPrime(ll n)
{ if(n==1) return false; else { for(ll i = 2;i*i<=n;i++) { if(n%i==0)return false; } return true; } }

void solve()
{	
	ll n, m;
  cin >> n >> m;
  if(n == 1 || m == 1)
  {
    cout << n << " " << m <<"\n";
  }
  else if(n <= 3 && m <= 3)
  {
    cout << ceil(double(n/2.0)) << " " << ceil(double(m/2.0)) <<'\n'; 
  }
  else
  {
   cout << n << " " << m <<"\n";
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

	
