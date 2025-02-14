class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k<=1){
            return 0;
        }
        int l=0,n=nums.size(),count=0,pro=1;
        for(int r=0;r<n;r++){
            pro=pro*nums[r];
            while(pro>=k){
                pro=pro/nums[l];
                l++;
            }
            count=count+r-l+1;
        }
        return count;
    }
};