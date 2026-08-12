class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int start=0;
        unordered_map<int,int>freq;
        int maxi=INT_MIN;
        for(int i=0; i<nums.size(); i++){
            freq[nums[i]]++;
            if(freq[nums[i]]<=k) maxi=max(maxi , i-start+1);
            while(freq[nums[i]]>k){
                freq[nums[start]]--;
                if(freq[nums[start]]==0) freq.erase(nums[start]);
                start++;
                maxi=max(maxi , i-start+1);
            }
        }
        return maxi;
    }
};