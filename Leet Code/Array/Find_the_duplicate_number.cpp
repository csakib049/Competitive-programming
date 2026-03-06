class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++){
              if(nums[i]==nums[i-1]){
                  return nums[i];
                
              }
        }

        return -1;
    }

};

//--------------------------------------------------
//optimized

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        unordered_set<int>seen;
        for(auto num:nums){
            if(seen.count(num))return num;
            else seen.insert(num);
        }


        return -1;
    }

};
