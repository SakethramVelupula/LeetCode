class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l=0,r=0;
        int n=nums.size();
        int sum=0;
        int minsum=n+1;
        while(r<n&&l<=r){
            sum+=nums[r];
            while(sum>=target){
                minsum=min(minsum,r-l+1);
                sum-=nums[l];
                l++;
            }
            r++;
        }
        if(minsum!=n+1){
            return minsum;
        }  
        else{
            return 0;
        }      

    }
};