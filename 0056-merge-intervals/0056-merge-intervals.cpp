class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>>ans;
        int n=intervals.size();
        vector<int>v=intervals[0];
        for(auto x:intervals)
        {
           if(x[0]<=v[1])
           {
               v[1]=max(v[1],x[1]);
           }
           else
           {
               ans.push_back(v);
               v=x;
           }
        }
        ans.push_back(v);
        return ans;
    }
};