class Solution {
public:
    int minimumRightShifts(vector<int>& nums) {
    
        vector<int> sorted = nums;
        sort(sorted.begin(), sorted.end());

        int count=0;
        for(int i=0;i<nums.size();i++)
        {


            if(nums==sorted)
            {


                return count;
            }
            else{
                count++;
                
    rotate(nums.begin(), nums.begin()+nums.size()-1, nums.end());
            }
        }
        return -1;
    }
};