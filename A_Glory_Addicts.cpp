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
  vector<int> a(n), b(n);
  for(auto &x : a) cin >> x;
  for(auto &x : b) cin >> x;
  vector<int>x,y;
  for(int i = 0; i < n; i++)
  {
    if(a[i])
      x.push_back(b[i]);
    else
      y.push_back(b[i]);
  }
  sort(x.begin(),x.end(),greater<int>());
  sort(y.begin(),y.end(),greater<int>());
  ll sum = 0;
  int i = 0, j = 0;
  int p = 1;
  while(i < x.size() && j < y.size())
  {
    if(p) sum+=2 * x[i++];
    else sum+=2 * y[j++];
    p^=1;
  }
  while(i < x.size()) sum+=x[i++];
  while(j < y.size()) sum+=y[j++];
  ll sum2 = 0;
  
   i = 0;
   j = 0;
   p = 0;
  while(i < x.size() && j < y.size())
  {
    if(p) sum2+=2 * x[i++];
    else sum2+=2 * y[j++];
    p^=1;
  }
  while(i < x.size()) sum2+=x[i++];
  while(j < y.size()) sum2+=y[j++];

  cout<<max(sum,sum2)<<"\n";

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

	
