class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n=nums.size();
        vector<int>res(n+1,-1);
        vector<int>a;
        for(int i=0;i<nums.size();i++){
            res[nums[i]]=nums[i];
        }
        for(int i=0;i<res.size();i++){
            if(res[i]==-1){
                a.push_back(i);
            }
        }
        if(a.front()==0){
            a.erase(a.begin());
        }
        return a;
    }
};