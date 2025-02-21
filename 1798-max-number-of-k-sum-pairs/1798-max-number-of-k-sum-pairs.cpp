class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        map<int,int>mp;
        int count=0;
        for(auto num:nums){
            int target=k-num;
            if (mp[target] > 0) {
                count++;
                mp[target]--;
            } else {
                mp[num]++;
            }
        }
        return count;
    }
};