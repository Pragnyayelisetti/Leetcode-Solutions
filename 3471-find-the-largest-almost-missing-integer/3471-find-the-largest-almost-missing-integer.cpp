class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        unordered_map<int, int>freq;
        int n=nums.size();
        for(int i=0; i<=n-k; i++) {
            unordered_set<int>arr;
            for(int j=i; j<i+k; j++) {
                arr.insert(nums[j]);
            }
            for(int num:arr) {
                freq[num]++;
            }
        }
        int ans=-1;
        for (auto it:freq) {
            if(it.second == 1) {
                ans=max(ans,it.first);
            }
        }
        return ans;
    }
};