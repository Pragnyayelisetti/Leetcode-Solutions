class Solution {
public:
    int minimumRightShifts(vector<int>& nums) {
        int cnt=0,idx=-1;
        for(int i=0; i<nums.size()-1; i++){
            if(nums[i]>nums[i+1]){
                cnt++;
                idx=i;
            }
        }
        //4 2 1
        //1 4 2
        if(nums[nums.size()-1]>nums[0]){
            cnt++;
            idx=nums.size()-1;
        }
        if(cnt==0) return 0;
        if(cnt>1) return -1;
        return nums.size()-idx-1;
    }
};