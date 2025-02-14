class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>res;
        backtrack(nums,0,res);
        return res;
    }
    void backtrack(vector<int>&nums,int start,vector<vector<int>>&res){
        if(start==nums.size()){
            res.push_back(nums);
            return;
        }
        for(int i=start;i<nums.size();i++){
            swap(nums[start],nums[i]);
            backtrack(nums,start+1,res);
            swap(nums[start],nums[i]);
        }
    }
};

//         vector<vector<int>>v;
//         if(nums.size()==1){
//             vector<int>s;
//             s.push_back(nums[0]);
//             v.push_back(s);
//             return v;
//         }
//         for(int i=0;i<nums.size();i++){
//             int n=nums[i];
//             vector<int>r;
//             for(int j=0;j<nums.size();j++){
//                 if(j!=i){
//                     r.push_back(nums[j]);
//                 }
//             }
//             vector<vector<int>>perms=permute(r);
//             for(vector<int>p:perms){
//                 p.insert(p.begin(),n);
//                 v.push_back(p);
//             }
//         }
//         return v;
//     }
// };