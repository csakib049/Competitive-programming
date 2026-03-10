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
