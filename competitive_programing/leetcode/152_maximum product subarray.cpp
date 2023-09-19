class Solution {
public:
    int maxProduct(vector<int>& nums) {
        double c=1;
        int max=INT_MIN;
        if(nums.size()==1){
            return nums[0];
        }
        for(int i=0;i<nums.size();i++)
        {
           
            c=c*nums[i];
            if(c>max)
            {
                max=c;
            } 
      
            if(c==0)
            {
                c=1;
            }

            
        }
        cout<<max;
        c=1;
        for(int i=nums.size()-1;i>=0;i--)
        {
           
           
            c=c*nums[i];
            if(c>max)
            {
                max=c;
            } 
          
            if(c==0)
            {
                c=1;
            }

            
        }
        
        return max;
    }
};