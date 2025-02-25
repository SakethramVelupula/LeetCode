class Solution {
public:
    string decodeString(string s) {
        stack<int> countStack;
        stack<string> stringStack;
        string currentString;
        int k = 0;
        for(char c:s){
            if(isdigit(c)){
                k=k*10+(c-'0');
            }
            else if(c=='['){
                countStack.push(k);
                stringStack.push(currentString);
                currentString = "";
                k = 0;
            }
            else if(c==']'){
                int repeatTimes = countStack.top();
                countStack.pop();
                string prevString = stringStack.top();
                stringStack.pop();
                string repeated;
            for (int i = 0; i < repeatTimes; i++) {
                repeated += currentString;
            }
            currentString = prevString + repeated;
            }
            else{
                currentString+=c;
            }
        }
        return currentString;
    }
};