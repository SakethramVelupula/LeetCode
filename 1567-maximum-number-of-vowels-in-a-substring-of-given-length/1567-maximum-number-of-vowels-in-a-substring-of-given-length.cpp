class Solution {
public:
    int maxVowels(string s, int k) {
        int maxcount=INT_MIN,count=0,i=0,m=0;
        while(i<s.size()){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
                count++;  
            }
            m++;
            if(m==k){
                maxcount=max(maxcount,count);
                if(s[i-k+1]=='a'||s[i-k+1]=='e'||s[i-k+1]=='i'||s[i-k+1]=='o'||s[i-k+1]=='u'){
                    count--;
                }
                m--;
            }
            i++;
        }
        return maxcount;
    }
};