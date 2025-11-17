class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int idx;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==1){
                idx=i;
                break;
            } 
        }
        for(int i=idx+1; i<nums.size(); i++){
            if(nums[i]==1 && abs(idx-i)>k){
                idx=i;//3
            }
            else if(nums[i]==1 && abs(idx-i)<=k) return 0;
        }
        return 1;
    }
};