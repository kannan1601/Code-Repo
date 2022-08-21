#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int gcd(int a,int b)
{ if(b==0) return a; else{ return gcd(b,a%b); } }
	
void solve()
{
  ll n;
  cin>>n;
  ll bot=0;
  ll count = 0;
  
  while(n>count)
    {
        bot++;
        count+=5;
    }
    cout<<bot<<"\n";
  
}


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	for(int i=1;i<=t;i++)
	{
    cout<<"Case #"<<i<<": ";
		solve();
	}
}

	
