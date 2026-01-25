class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        if(k==1) return 0;
        sort(nums.rbegin() , nums.rend());
        //vector<int>arr;
        int mini=INT_MAX;
        for(int i=0; i<nums.size()-1; i++){
            if(i+k-1<nums.size())mini=min(mini , nums[i]-nums[i+k-1]);
        }
        return mini;
    }
};