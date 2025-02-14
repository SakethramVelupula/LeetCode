class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        // unordered_set<int>s;
        // for(int i=0;i<matrix.size();i++){
        //     for(int j=0;j<matrix[0].size();j++){
        //         s.insert(matrix[i][j]);
        //     }
        // }
        // if(s.find(target)==s.end()){
        //     return false;
        // }
        // return true;
        int top=0,bottom=matrix.size()-1,ans=0;
        while(top<=bottom){
            int mid=top+(bottom-top)/2;
            if(matrix[mid][0]<=target){
                top=mid+1;
                ans=mid;
            }
            else{
                bottom=mid-1;
            }
        }
        int left=0,right=matrix[0].size()-1;
        while(left<=right){
            int mid=left+(right-left)/2;
            if(matrix[ans][mid]==target){
                return true;
            }
            else if(matrix[ans][mid]<target){
                left=mid+1;
            }
            else{
                right=mid-1;
            }
        }
        return false;
    }
};