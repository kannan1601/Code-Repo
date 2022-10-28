#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lld long long double
#define pb push_back

int gcd(int a,int b)
{ if(b==0) return a; else{ return gcd(b,a%b); } }
bool isPrime(ll n)
{if(n==1) return false; else {for(ll i = 2;i*i<=n;i++) {if(n%i==0)return false;} return true;}}

bool valid(vector<int> b, int remove)
{
	int i = 0;
	int j = b.size() - 1;
	while(i < j)
	{
		if(b[i] == b[j])
		{
			i++;
			j--;
		}
		else if(b[i] == remove)
		{
			i++;
		}
		else if(b[j] == remove)
		{
			j--;
		}
		else
			return false;
	}
	return true;

}

void solve()
{	
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int indx = -1;
	for(int i = 0; i < n/2; i++)
	{
		if(a[i] != a[n - i - 1])
		{
			indx = i;
			break;
		}
	}
	if(indx == -1)
	{
		cout << "YES\n";
		return;
	}
	vector<int> v;
	for(int i = indx; i <= n - indx - 1; i++)
	{
		v.pb(a[i]);
	}
	if(valid(v, a[indx]) || valid(v, a[n - indx - 1]))
	{
		cout << "YES\n";
	}
	else
		cout << "NO\n";
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

	
