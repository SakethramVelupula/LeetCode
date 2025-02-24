class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int>mp;
        for(auto i:arr){
            mp[i]++;
        }
        map<int,int>mp1;
        for(auto i:mp){
            mp1[i.second]++;
        }
        if(mp.size()==mp1.size()){
            return true;
        }
        return false;
    }
};