class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>path;
        vector<vector<int>>result;
        backtrack(nums,0,path,result);
        return result;
        // vector<vector<int>>res;
        // for(int i=0;i<(1<<nums.size());i++){
        //     vector<int>s;
        //     for(int j=0;j<nums.size();j++){
        //         if((i&(1<<j))>0){
        //             s.push_back(nums[j]);
        //         }
        //     }
        //     res.push_back(s);
        // }
        // return res;

    }
    void backtrack(vector<int>&nums,int start,vector<int>&path,vector<vector<int>>&result){
        result.push_back(path);
        for(int i=start;i<nums.size();i++){
            path.push_back(nums[i]);
            backtrack(nums,i+1,path,result);
            path.pop_back();
        }
    }
};