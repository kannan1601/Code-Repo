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
  vector<int>a;
  for(int  i = 0; i < n; i++)
  {
    int x;
    cin>>x;
    a.push_back(x);
  }
  int answer = max_element(a.begin(),a.end()) - a.begin();
  cout<<answer+1<<"\n";
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

	
