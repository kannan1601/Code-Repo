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
	int n;
  cin >> n;
  vector<int> a(n);
  for(auto &x : a)
  cin >> x;

  vector<int>res(n);
  res[0] = a[0];
  for(int i = 1; i < n; i++)
  {
    if(a[i] == 0)
    {
      res[i] = res[i - 1];
      continue;
    }
    if(a[i] <= res[i - 1])
    {
      cout<<"-1\n";
      return;
    }
    res[i] = res[i - 1] + a[i];
  }
  for(auto i : res)
  {
    cout << i <<" ";
  }
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

	
