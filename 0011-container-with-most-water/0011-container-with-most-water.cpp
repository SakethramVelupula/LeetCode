class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0,j=height.size()-1,res=0,area=0;
        while(i<=j){
            area=min(height[j],height[i])*(j-i);
            res=max(res,area);
            if(height[i]>height[j]){
                j--;
            }
            else{
                i++;
            }
        }
        return res;
    }
};