#include <bits/stdc++.h> 

long long int f(vector<int> &arr)
{
    long long int n = arr.size();
    long long int first = 0;
    long long int second = arr[0];
   
    for(int i = 0; i < n; i++)
    {
        long long int pick = arr[i];
        if(i > 1)
            pick+=first;
        long long int notPick = 0 + second;
        long long int cur = max(pick,notPick);
        first = second;
        second = cur;
    }
    return second;
}
long long int houseRobber(vector<int>& arr)
{
  long long int n = arr.size();
  if(n == 1)
      return arr[0];
   vector<int>first,second;
   for(int i = 0;i < n; i++)
   {
        if(i != 0)first.push_back(arr[i]);
        if(i != n-1)second.push_back(arr[i]);
   }
    return max(f(first),f(second));
}