// Last updated: 08/05/2026, 10:47:14
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
       int n = matrix.size();
       int m = matrix[0].size();

       int l =0 ;
       int h = (n*m)-1;

       while(l <= h){
        int mid = (l+(h-l)/2);
        if(matrix[mid/m][mid%m] == target){
            return true;
        }
        if(matrix[mid/m][mid%m] < target){
            l =  mid+1;
        }
        else{
            h = mid-1;
        }
       }
       return false;
    }
};