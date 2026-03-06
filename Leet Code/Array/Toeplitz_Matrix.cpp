class Solution {

public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
 

        int height=matrix.size();
        int weidth=matrix[0].size();

        for(int i=1;i<height;i++){
            for(int j=1;j<weidth;j++){
               if(matrix[i][j]!=matrix[i-1][j-1]) return false;
            }
        }

        return true;
    }
};
//------------------------------------------------------
//optimized 

class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {

        int m = matrix.size();
        int n = matrix[0].size();

        for(int i = 1; i < m; i++) {
            for(int j = 1; j < n; j++) {

                // if the matrix[i][j] is not equal to the diagonally previous one then return false 
                if(matrix[i][j] != matrix[i-1][j-1]) {
                    return false;
                }
            }
        }

        return true;
    }
};
