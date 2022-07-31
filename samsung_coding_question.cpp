#include<bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  getline(cin,s);
  stringstream str(s);
  vector<string>a;
  string word="";
  while(str >> word)
  {
    {
      a.push_back(word);
    }
  }
  int n=a.size();
  for(int i=0;i<n;i++)
  {
    int flag=0;
    for(int j=0;j<n-i-1;j++)
    {
      if(a[j].size()>a[j+1].size())
      {
        flag=1;
        swap(a[j],a[j+1]);

      }
    }
    if(!flag)
    break;
  }
  a[0][0]=a[0][0]-32;
  
  for(auto it=a.begin();it!=a.end();it++){
    if(it==a.end()-1)
    {
      cout<<*it<<".";
    }
    else{
      cout<<*it<<" ";
    }
  }
}