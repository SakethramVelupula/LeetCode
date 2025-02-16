class Solution {
public:
    string minWindow(string s, string t) {
        map<char,int>mp;
        int l=0,r=0;
        int minsize=INT_MAX,startIndex=-1,count=0;
        for(int i=0;i<t.size();i++){
            mp[t[i]]++;
        }
        while(r<s.size()){
            if(mp[s[r]]>0){
                count++;
            }
            mp[s[r]]--;
            while(count==t.size()){
                if(minsize>r-l+1){
                    minsize=r-l+1;
                    startIndex=l;
                }
                mp[s[l]]++;
                if(mp[s[l]]>0){
                    count--;
                }
                l++;
            }
            r++;
        }
        return startIndex==-1?"":s.substr(startIndex,minsize);
    }
};