class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int cnt=0;
        vector<int>arr(k+1 , 0);
        for(int i=nums.size()-1; i>=0; i--){
            if(nums[i]<=k && arr[nums[i]]!=-1){
                cnt=nums.size()-i;
                arr[nums[i]]=-1;
            }
        }
        return cnt;
    }
};