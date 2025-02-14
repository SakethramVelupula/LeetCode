class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int left=0;
        int right=1;
        int maxprofit=0;
        while(right<prices.size()){
            int profit=prices[right]-prices[left];
            if(prices[right]>prices[left]){
                maxprofit=max(maxprofit,profit);
            }
            else{
                left=right;
            }
            right++;
        }
        return maxprofit;
    }
};