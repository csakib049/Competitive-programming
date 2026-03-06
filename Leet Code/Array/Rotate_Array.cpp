class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();

          k=k%n; // to keep the value of k less then n

          vector<int>v(n);
          
        for(int i=0;i<n;i++){
             v[(i+k)%n]=nums[i];
        }

        nums=v;
    }
};



/------------------------------------------------------------
///optimal solution 

class Solution {

private:
    void reverse(int i,int j,vector<int>&v){
        while(i<j){

         int temp=v[i];
            v[i]=v[j];
            v[j]=temp;

             i++;
             j--;

        }
    }

public:
    void rotate(vector<int>& nums, int k) {
  
     int n=nums.size();

     k=k%n;

     reverse(0,n-1,nums);
     reverse(0,k-1,nums);
     reverse(k,n-1,nums);
        
    }
};