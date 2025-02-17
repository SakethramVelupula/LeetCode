class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxi=INT_MIN;
        vector<bool>cand(candies.size());
        for(int i =0;i<candies.size();i++){
            if(candies[i]>maxi){
                maxi=candies[i];
            }
        }
        for(int i=0;i<candies.size();i++){
            if((candies[i]+extraCandies)>=maxi){
                cand[i]=true;
            }
            else{
                cand[i]=false;
            }
        }
        return cand;
    }
};