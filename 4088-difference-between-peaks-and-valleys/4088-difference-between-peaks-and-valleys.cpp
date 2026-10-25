class Solution {
public:
    int peakValleyDifference(vector<int>& nums) {
        int pcnt=0,vcnt=0;
        for(int i=1; i<nums.size()-1; i++){
            if(nums[i]>nums[i-1] and nums[i]>nums[i+1]) pcnt+=nums[i];
            else if(nums[i]<nums[i-1] and nums[i]<nums[i+1]) vcnt+=nums[i];
        }
        return pcnt-vcnt;
    }
};