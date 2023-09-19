class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int c=nums[0];
        int max=c;
        for(int i=0;i<nums.size()-1;i++)
        {
            
            c=c*nums[i+1];
             if(c>max)
                {
                    max=c;
                }

            if(c==0){
                c=nums[i];
                max=c;
            }
        }
        
        return max;
    }
};