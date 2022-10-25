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
  int n;
  cin >> n;
  if(n % 2)
  {
    int tmp = n;
    --tmp;
    int j = 1;
    for(int i = (n/2) + 1; i <= tmp; i++)
    {
      cout << i <<" " << j <<" ";
      j++;
    }
    cout << n;
    cout << "\n";
  }
  else
  {
    int j = 1;
    for(int i = (n/2) + 1; i <= n; i++)
    {
      cout << i <<" " << j <<" ";
      j++;
    }
    cout << "\n";
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