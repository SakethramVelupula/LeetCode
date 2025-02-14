class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int s,e;
        s=0;
        double avg=INT_MIN;
        double sum=0;
        for(e=0;e<nums.size();e++){
            sum+=nums[e];
            if((e-s+1)==k){
                avg=max(avg,sum);
                sum=sum-nums[s];
                s++;
            }
        }
        return (avg/k);         
    }
};