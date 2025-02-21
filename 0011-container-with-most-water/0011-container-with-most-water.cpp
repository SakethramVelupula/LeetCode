class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0,j=height.size()-1,res=0,area=0;
        while(i<=j){
            if(height[i]>height[j]){
                area=height[j]*(j-i);
                res=max(res,area);
                j--;
            }
            else{
                area=height[i]*(j-i);
                res=max(res,area);
                i++;
            }
        }
        return res;
    }
};