class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int smaller = 0;
        for(int i=matrix.size()-1;i>=0;i--){
            if(matrix[i][matrix[0].size()-1]>target){
                smaller = i; 
            }
            else if(matrix[i][matrix[0].size()-1]==target){
                return true;
            }
            }
        for(int j=0;j<matrix[0].size();j++){
            if(matrix[smaller][j]==target){
                return true;
            }
        }
         return false;
        
        }
};