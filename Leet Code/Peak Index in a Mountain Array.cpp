//https://leetcode.com/problems/peak-index-in-a-mountain-array/description/

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int m=max_element(arr.begin(),arr.end())-arr.begin();
        return m;
    }
};
