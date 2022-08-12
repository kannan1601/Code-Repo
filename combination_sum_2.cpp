class Solution {
    void combination(int ind,int n,vector<int> &a,int target, vector<vector<int>> &ans,vector<int> &ds)
    {
        
            if(target == 0)
            {
                ans.push_back(ds);
                return;
            }
            
        for(int i=ind;i<a.size();i++)
        {
            if(i>ind && a[i]==a[i-1])continue;
            if(target < a[i])break;
            ds.push_back(a[i]);
            combination(i+1,n,a,target-a[i],ans,ds);
            ds.pop_back();
            
        }
    }
public:
    vector<vector<int>> combinationSum2(vector<int>& a, int target) {
        sort(a.begin(),a.end());
        vector<vector<int>> ans;
        int n=a.size();
        vector<int> ds;
        combination(0,n,a,target,ans,ds);
        return ans;
    }
};