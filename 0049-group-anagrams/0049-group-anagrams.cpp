class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
        unordered_map<string,vector<string>>mp;
        for(auto i:strs){
            string word=i;
            sort(word.begin(),word.end());
            mp[word].push_back(i);
        }
        for(auto i:mp){
            ans.push_back(i.second);
        }
        return ans;
    }
};