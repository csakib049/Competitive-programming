//solve for worst case 

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();

         vector<vector<int>> arr(n, vector<int>(n));

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                arr[j][n-1-i]=matrix[i][j];
            }
        }

        
       matrix = arr;   // copy back
      
    }
};




//optimal solution 


class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();

        //transpose 
        for(int i=0;i<n-1;i++){
            for(int j=i;j<n;j++){
               swap(matrix[i][j],matrix[j][i]);
            }
        }

        //reverse
        for(int i=0;i<n;i++){
            int p1=0; int p2=n-1;
            while(p1<p2){
                swap(matrix[i][p1],matrix[i][p2]);
                p1++;p2--;
            }
        }
      
    }
};