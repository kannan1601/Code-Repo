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
  string s;
  cin>>s;
  if(s[0]!='9')
  {
   for(int i = 0; i < s.size(); i++)
   {
    cout<<9 - (s[i] - 48);
   }
   cout<<"\n";
  }
  else
  {
    string ans = "";
    int a = 11 - (s[n-1] - '0');
    int carry = 1;
    if(a>=10)
    {
      a-=10;
      carry = 0;
    }
    ans+=(char)(a + '0');
    for(int  i = n-2; i >= 0; i--)
    {
      int val = s[i] - '0';
      val+=carry;
      if(val > 8)
      {
        ans+=(char)('0' + (18 - val));
        carry = 1;
      }
      else
      {
        ans+=(char)('0' + (8 - val));
        carry = 0;
      }
    }
    reverse(ans.begin(),ans.end());
    cout<<ans<<"\n";
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

	
