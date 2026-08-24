class Solution {
public:
    int recfun(vector<int>&nums , int sum, int i){
        if(i >= nums.size()) return sum;
        int one =  recfun(nums , sum^nums[i] ,i+1);
        int two =  recfun(nums , sum , i+1);
        return one + two;
    }
    int subsetXORSum(vector<int>& nums) {
        return recfun(nums  , 0 , 0);
    }
};