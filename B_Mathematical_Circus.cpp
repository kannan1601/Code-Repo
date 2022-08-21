#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int gcd(int a,int b)
{ if(b==0) return a; else{ return gcd(b,a%b); } }
	
void solve()
{
  int n,k;
  cin>>n>>k;
  if(k%4==0)
  {
    cout<<"NO\n";
    return;
  }
  if(k%2==0)
  {
    cout<<"YES\n";
    vector<int> a;
    for(int i=1;i<=n;i+=2)
    {

      a.push_back(i);
    }
    for(int i=2;i<=n;i+=2)
    {
      if(i%4==0)
      {
        cout<<a.back()<<" "<<i<<"\n";
        a.pop_back();
      }
      else
      {
           cout<<i<<" "<<a.back()<<"\n";
           a.pop_back();
      }
     
    }
  }
  else{
    cout<<"YES\n";
    for(int i=1;i<=n;i+=2)
    {
       cout<<i<<" "<<i+1<<"\n";
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

	
