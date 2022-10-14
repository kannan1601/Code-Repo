#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lld long long double
#define pb push_back
const ll INF = 1e18;
int gcd(int a,int b)
{ if(b==0) return a; else{ return gcd(b,a%b); } }
bool isPrime(ll n)
{ if(n==1) return false; else { for(ll i = 2;i*i<=n;i++) { if(n%i==0)return false; } return true; } }
bool cmp(pair<int,int> &a, pair<int,int> &b)
{
  return a.second < b.second;
}
void solve()
{	
	int n;
  cin >> n;
  int a[n];
  map<int,int>mpp;
  for(int i = 0; i < n; i++)
  {
    cin >> a[i];
    mpp[a[i]]++;
  }
  int cnt = 0;
  vector<pair<int,int>> p;
  for(auto it : mpp)
  {
    p.push_back(it);
  }
  sort(p.begin(), p.end(), cmp);

  for(auto it = p.begin(); it != p.end(); it++){
    cnt+=it->second;
  }
  pair<int,int> val = p.back();
  cnt-=val.second;
  cout << cnt <<"\n";

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

	
