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

void solve()
{	
	int n;
  cin >> n;
  int l[n], r[n];
  map<pair<int,int>,int> mpp;
  for(int i = 0; i < n; i++)
  {
    cin >> l[i] >> r[i];
    mpp[{l[i],r[i]}] = 1;
  }
  for(int i = 0; i < n; i++)
  {
    for(int j = l[i]; j <= r[i]; j++)
    {
      if(l[i] == r[i])
      {
        cout << l[i] << " " << r[i] << " " << j <<"\n"; 
      }
      else if(mpp[{l[i], j - 1}] == 1 && mpp[{j + 1, r[i]}] == 1)
      {
        cout << l[i] << " " << r[i] << " " << j <<"\n";
      }
      if((j == l[i] && mpp[{j + 1, r[i]}] == 1) || j == r[i] && mpp[{l[i], j - 1}] == 1)
      {
        cout << l[i] << " " << r[i] << " " << j <<"\n";
      }
    }
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

	
