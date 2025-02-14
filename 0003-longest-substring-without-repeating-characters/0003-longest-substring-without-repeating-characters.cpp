class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0,j=0,ans=0;
        map<char,int>mp;
        while(j<s.size()){
            if (mp.find(s[j]) != mp.end()) {
                i = max(mp[s[j]] + 1, i);
            }
            ans = max(ans, j - i + 1);
            mp[s[j]] = j;
            j++;
        }
        return ans;
    }
};