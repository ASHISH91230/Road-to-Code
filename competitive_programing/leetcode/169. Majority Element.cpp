class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        int m=INT_MIN;
        for(auto x:mp)
        {
            m=max(m,x.second);
        }
        for(auto x:mp)
        {
            if(x.second==m)
            {
                return x.first;
            }
        }
        return
    }
};