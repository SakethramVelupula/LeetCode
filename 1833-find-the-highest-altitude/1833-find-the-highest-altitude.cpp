class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int prefix=0,ans=0;
        for(int i=0;i<gain.size();i++){
            prefix+=gain[i];
            if(ans<prefix){
                ans=prefix;
            }
        }
        return ans;
    }
};