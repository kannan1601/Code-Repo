class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        if(!strs.size())
            return ans;
        unordered_map<string,vector<string>>mpp;
        for(string s:strs)
        {
            string temp = s;
            sort(temp.begin(),temp.end());
            mpp[temp].push_back(s);
        }
        for(auto it:mpp)
        {
            vector<string>temp;
            for(auto j:it.second)
            {
                temp.push_back(j);
            }
            ans.push_back(temp);
        }
        return ans;
    }
};