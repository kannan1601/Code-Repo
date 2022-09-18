#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int gcd(int a,int b)
{ if(b==0) return a; else{ return gcd(b,a%b); } }
bool isPrime(ll n)
{ if(n==1) return false; else { for(ll i = 2;i*i<=n;i++) { if(n%i==0)return false; } return true; } }

int solve(int ind,vector<int> &a,vector<int> &dp,int k)
{
  if(ind == 0)
    return 0;
  if(dp[ind] != -1)
    return dp[ind];
  int minsteps = INT_MAX;
  for(int j = 1; j <= k; j++)
  {
    if(ind - j >= 0)
    {
      int jumps = abs(a[ind] - a[ind - j]) + solve(ind - j,a,dp,k);
      minsteps = min(minsteps,jumps);
    }
  }
  return dp[ind] = minsteps;
}

int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 int n,k;
 cin>>n>>k;
 vector<int>a(n);
 for(int i = 0;i < n; i++)
 {
  cin>>a[i];
 }
 vector<int>dp(n,-1);
 cout<<solve(n-1,a,dp,k);

}