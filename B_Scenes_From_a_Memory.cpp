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
	ll n;
  cin>>n;
  string s;
  cin>>s;
  for(int i=0;i<n;i++)
  {
    if(s[i]!='2' && s[i]!='3' && s[i]!='5' && s[i]!='7')
    {
      cout<<"1\n"<<s[i]<<"\n";
      return;
    }
  }
  int num = 0;
  for(int i = 0; i < n - 1; i++)
  {
    for(int j = i + 1; j < n; j++)
    {
      num=s[i]-'0';
      num*=10;
      num+=(s[j]-'0');
      if(isPrime(num) == false)
      {
        cout<<"2\n";
        cout<<num<<"\n";
        return;
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

	
