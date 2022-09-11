#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int gcd(int a,int b)
{ if(b==0) return a; else{ return gcd(b,a%b); } }
bool isPrime(ll n)
{ if(n==1) return false; else { for(ll i = 2;i*i<=n;i++) { if(n%i==0)return false; } return true; } }
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 
  int n,q;
  cin>>n>>q;
  ll a[n+1] = {0};
  for(ll i = 1; i <= n; i++)
  {
    cin>>a[i];
  }
  vector<ll>forward(n+1,0);
  vector<ll>backward(n+1,0);
  for(ll  i = 2; i <= n; i++)
  {
    if(a[i] < a[i-1])
    {
      forward[i] = forward[i-1] + (a[i] - a[i-1]);
    }
    else
      forward[i] = forward[i-1];
  }
  for(ll  i = n-1; i >= 1; i--)
  {
    if(a[i] < a[i+1])
    {
      backward[i] =backward[i+1] + (a[i] - a[i+1]);
    }
    else
      backward[i] = backward[i+1];
  }
  
  int start,end;
  while(q--)
  {
    cin>>start>>end;
    if (start < end)
    {
      cout<<forward[start] - forward[end]<<'\n';
    }
    else
    {
      cout<<backward[start] - backward[end]<<'\n';
    }
  }
  
}