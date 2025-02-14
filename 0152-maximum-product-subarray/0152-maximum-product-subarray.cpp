class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size(),pro=1,maxpro=INT_MIN;
        int prefix=1,suffix=1;
        for(int i=0;i<n;i++){
            if(prefix==0)prefix=1;
            if(suffix==0)suffix=1;
            prefix=prefix*nums[i];
            suffix=suffix*nums[n-i-1];
            maxpro=max(maxpro,max(prefix,suffix));
        }
        return maxpro;
        // for(int i=0;i<n;i++){
        //     pro=pro*nums[i];
        //     maxpro=max(maxpro,pro);
        //     if(pro==0){
        //         pro=1;
        //     }
        // }
        // pro=1;
        // for(int i=n-1;i>=0;i--)
        // {
        //   pro*=nums[i];
        //   maxpro=max(pro,maxpro);
        //   if(pro==0)
        //    pro=1;
        // }
        // return maxpro;
    }
};