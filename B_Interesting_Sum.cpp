#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define fastInOut ios_base::sync_with_stdio(false); cin.tie(NULL);
int gcd(int a,int b)
{ if(b==0) return a; else{ return gcd(b,a%b); } }
	
void solve()
{
  ll n;
  cin>>n;
  vector<int>a(n);
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  sort(a.begin(),a.end());
  cout<<(a[n-1]-a[0])+(a[n-2]-a[1])<<"\n";

}


int main()
{
	fastInOut;
	int t;
	cin>>t;
	while(t--)
	{
		solve();
	}
}

	
