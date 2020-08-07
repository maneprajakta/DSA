class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int,int>mp;
        
        for(auto x : nums)
        {
            mp[x]++;
        }
        vector<int>v;
        for(auto x :mp)
        {
            if(x.second==2)
               v.push_back(x.first);      
        } 
        reverse(v.begin(),v.end());
        return v;
    }
};
