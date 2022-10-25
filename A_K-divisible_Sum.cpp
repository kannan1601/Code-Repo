#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lld long long double
#define pb push_back

int gcd(int a,int b)
{ if(b==0) return a; else{ return gcd(b,a%b); } }
bool isPrime(ll n)
{if(n==1) return false; else {for(ll i = 2;i*i<=n;i++) {if(n%i==0)return false;} return true;}}

void solve()
{	
	ll n, k;
  cin >> n >> k;
  
  if(n == k)
  {
    cout << "1\n";
    return;
  }
  if(n < k)
  {
    int q = k / n;
    int r = k % n;
    if(r != 0)q++;
    cout << q << "\n";
  }
  else
  {
    int q = n / k;
    int r = n % k;
    if(r != 0)q++;
    k*=q;
    int a = k / n;
    int b = k % n;
    if(b != 0)a++;
    cout << a <<"\n"; 
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

	
