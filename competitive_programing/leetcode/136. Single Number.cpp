class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int>m;
        int t=0;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        for(auto x:m)
        {
            if(x.second==1)
            {
                t= x.first;
            }
        }
        return t;
    }
};