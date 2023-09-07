class Solution {
public:
    void moveZeroes (vector<int>& nums){
        
        
      // sort(nums.begin(),nums.end());
       int n=nums.size();
       int c=0;
       int j=0;
       while(j<=nums.size())
       {
            for(int i=0;i<nums.size();i++)
            {
            
            
                if(nums[i]==0)
                {c++;
                
                nums.erase(nums.begin()+i);
                    break;
                }
            }
            j++;
       }
       j=0;
       while(j<=nums.size())
       {
            for(int i=0;i<nums.size();i++)
            {
            
            
                if(nums[i]==0)
                {c++;
                
                nums.erase(nums.begin()+i);
                    break;
                }
            }
            j++;
       }
       
        for(int i=0;i<c;i++)
        {
            nums.push_back(0);
        }
    }
};