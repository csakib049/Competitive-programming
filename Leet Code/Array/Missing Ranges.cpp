//    https://drive.google.com/file/d/1KiV2MPjYbcGAzng9QR4ElgAjq8s-U_fz/view?pli=1

class solution{
    public:
      
    bool hasValue(vector<int>& nums,int i){
          
        for(auto n:nums){
            if(n==i) return true;
        }
        return false;
    }
       

     vector<vector<int>> findMissingRanges(vector<int>& nums, int lower, int upper){
           
        vector<vector<int>> ans; 
         int x=-1;
        for(int i=lower;i<=upper;i++){
           
            if(!(hasValue(nums,i))){
                if(x==-1)x=i;
            }else{
                if(x!=-1){
                    ans.push_back({x,i-1});
                    x=-1;
                }
            }
            
        }
        if(x==-1)ans.push_back({x,upper});

        return ans;
     }

}

//-----------------------------------------------------------------
//optimized


class solution{
    public:

     vector<vector<int>> findMissingRanges(vector<int>& nums, int lower, int upper){
           
        vector<vector<int>> ans; 
           
        nums.insert(nums.begin(),lower-1);  // insert lower-1 value in the first 
        nums.push_back(upper+1);  // push upper+1 value in the last 

        for(int i=0;i<nums.size()-1;i++){  //O(n)

            if((nums[i+1]-nums[i])>1){
                ans.push_back({nums[i]+1,nums[i+1]-1});    // if the array is [1,2,3,9] ==> [4,8] 
            }
        }
        return ans;
     }

}