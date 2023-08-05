class Solution {
public:
    int accountBalanceAfterPurchase(int purchaseAmount) {
        int result=purchaseAmount%10;
        
        if(result<5)
        {
            purchaseAmount=purchaseAmount-result;
            
            return (100-purchaseAmount);
        }
        else{
             purchaseAmount=purchaseAmount-result;
           purchaseAmount= purchaseAmount+10;
            return (100-purchaseAmount);
        }
    }
};