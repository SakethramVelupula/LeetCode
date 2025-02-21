class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double maxavg=INT_MIN;
        double sum=0;
        for(int i=0;i<k;i++){
            sum+=nums[i];
        }
        maxavg=sum;
        for(int i=k;i<nums.size();i++){
            sum+=nums[i]-nums[i-k];
            maxavg=max(maxavg,sum);
        }
        return maxavg*1.0/k;
    }
};