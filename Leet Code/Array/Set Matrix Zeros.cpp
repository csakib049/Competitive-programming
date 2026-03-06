class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int row=matrix.size();
        int col=matrix[0].size();

        vector<bool>rowAr(row,false);
        vector<bool>colAr(col,false);


        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(matrix[i][j]==0){
                    rowAr[i]=true;
                    colAr[j]=true;
                }
            }
        }


        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(rowAr[i])matrix[i][j]=0;
                if(colAr[j])matrix[i][j]=0;
            }
        }

       
    }
};



//---------------------------------------------------
//optimized

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {

          int row=matrix.size();
          int col=matrix[0].size();

          int col0=1;

          //marks row and col 
          for(int i=0;i<row;i++){
            if(matrix[i][0]==0)col0=0;
            for(int j=1;j<col;j++){
                if(matrix[i][j]==0){
                    matrix[0][j]=0;
                    matrix[i][0]=0;
                }
            }
          }

      //update matrix (reverse traversal)
      for(int i=row-1;i>=0;i--){
        for(int j=col-1;j>=1;j--){
            if(matrix[i][0]==0 || matrix[0][j]==0)matrix[i][j]=0;
        }

        if(col0==0)matrix[i][0]=0;
      }

       
    }
};