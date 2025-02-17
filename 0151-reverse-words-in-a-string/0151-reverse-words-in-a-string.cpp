class Solution {
public:
    string reverseWords(string s) {
        s=" "+s;
        string ans="";
        int n=s.size(),k=n-1,c=0,a=n-1,cs=0;
        while(k>=0){
            if(s[a]==' '){
                a--;
                k--;
                continue;
            }
            if(s[k] != ' '){
                c++;
                k--;
                cs=0;
            }
            else{
                cs++;
                if(cs>1){
                    k--;
                    continue;
                }
                string ss=s.substr(k+1,c);
                ans+=ss+' ';
                c=0;
            }
        }
        ans.pop_back();
        return ans; 
    }
};
     