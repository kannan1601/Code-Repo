#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int gcd(int a,int b)
{ if(b==0) return a; else{ return gcd(b,a%b); } }
	
void solve()
{
	ng reverseWords(string s) {
        int n=s.length();
        int i=0,j=0;
        string ans="";
        while(i<n)
        {
            while(i<n && s[i]==' ')
                i++;
            if(i==n)
                break;
            j=i+1;
            while(j<n && s[j]!=' ')
                j++;
            string word=s.substr(i,j-i);
            if(ans.size()==0)
            {
                 ans=word;
            }
            else
            {
                ans=word+" "+ans;
            }
            i=j+1;
        }
        return ans;
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

	
