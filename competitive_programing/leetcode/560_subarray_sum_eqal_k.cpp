class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
             map<int,int> mp;
        int cnt = 0;
        mp.insert({0,1});
        int sum = 0;
        for(int i = 0; i<nums.size(); i++){
            sum += nums[i];
            auto it = mp.find(sum-k);
            if(it!=mp.end()){
                cnt += it->second;
            }
            it = mp.find(sum);
            if(it!= mp.end()){
                it->second++;
            }
            else{
                mp.insert({sum,1});
            }
        }
        return cnt;
    }
    
    
};