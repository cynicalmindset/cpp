// Last updated: 08/05/2026, 10:47:16
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();

        int x = 1;
        int y = 1;

        // check first row
        for(int j = 0; j < n; j++){
            if(matrix[0][j] == 0) x = 0;
        }

        // check first column
        for(int i = 0; i < m; i++){
            if(matrix[i][0] == 0) y = 0;
        }

        // mark rows & columns
        for(int i = 1; i < m; i++){
            for(int j = 1; j < n; j++){
                if(matrix[i][j] == 0){
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }

        // zero based on markers (skip first row/col)
        for(int i = 1; i < m; i++){
            for(int j = 1; j < n; j++){
                if(matrix[i][0] == 0 || matrix[0][j] == 0){
                    matrix[i][j] = 0;
                }
            }
        }

        // zero first column if needed
        if(y == 0){
            for(int i = 0; i < m; i++){
                matrix[i][0] = 0;
            }
        }

        // zero first row if needed
        if(x == 0){
            for(int j = 0; j < n; j++){
                matrix[0][j] = 0;
            }
        }
    }
};
