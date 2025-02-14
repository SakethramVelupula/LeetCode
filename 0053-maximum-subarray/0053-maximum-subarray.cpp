class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size(),maxsum=INT_MIN,sum=0;
        for(int i=0;i<n;i++){
            sum=sum+nums[i];
            maxsum=max(sum,maxsum);
            if(sum<0){
                sum=0;
            }
        }
        return maxsum;
    }
};