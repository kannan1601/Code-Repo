class Solution {
    void func(int ind,int n,vector<int> &a,int s,int target,vector<vector<int>> &ans,vector<int> &ds)
    {
        if(ind == n)
        {
            if(target==0)
            {
                ans.push_back(ds);
            }
            return;
        }
        //take element
        if(target >= a[ind])
        {
            ds.push_back(a[ind]);
            func(ind,n,a,s,target-a[ind],ans,ds);
            ds.pop_back();
        }
        //not pick
        func(ind+1,n,a,s,target,ans,ds);
    }
public:
    vector<vector<int>> combinationSum(vector<int>& a, int target)    {
        vector<vector<int>> ans;
        int n = a.size();
        vector<int>ds;
        func(0,n,a,0,target,ans,ds);
        return ans;
    }
};