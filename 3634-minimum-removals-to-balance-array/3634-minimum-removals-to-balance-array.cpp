class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
        sort(nums.begin() , nums.end());
        int start=0;
        int n = nums.size();
        int mini=n;
        for(int end=0; end<nums.size(); end++){
            while((long long)nums[end]>(long long)k*(long long)nums[start]){
                start++;
            }
            mini = min(mini , n-end + start -1);
        }
        return mini;
    }
};