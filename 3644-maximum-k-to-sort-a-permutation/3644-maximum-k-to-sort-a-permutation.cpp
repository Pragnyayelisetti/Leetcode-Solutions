class Solution {
public:
    int sortPermutation(vector<int>& nums) {
        vector<int>arr=nums;
        sort(arr.begin(), arr.end());
        int f=0;
        int a=-1;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==arr[i]) continue;
            a&=nums[i];
            a&=arr[i];
        }
        return max(a,0);
    }
};