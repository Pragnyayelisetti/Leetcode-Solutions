class Solution {
public:
    int minimumIndex(vector<int>& nums) {
        //find the dominant element
        unordered_map<int,int>freq,mpp,mpp1;
        for(int num:nums) freq[num]++;
        int ele=0;
        int maxi=INT_MIN;
        for(auto it:freq){
            if(maxi<it.second){
                maxi=it.second;
                ele=it.first;
            }
        }
        //ele=1
        //finding subarray
        //1,1,1,1,2,3
        int maxi1=INT_MIN;
        int ans=-1;
        for(int i=0; i<nums.size(); i++){
            mpp[nums[i]]++;//3 --> 1
            if(maxi1<mpp[nums[i]]){
                maxi1=mpp[nums[i]];//1
                if(nums[i]==ele && mpp[nums[i]]*2>i+1){
                    ans=i;
                    break;
                }
            }
        }
        if(ans==-1) return ans;
        int maxfreq1=freq[ele]-mpp[ele];
        for(int i=ans+1; i<nums.size(); i++){
            mpp1[nums[i]]++;
            if(mpp1[nums[i]]*2>nums.size()-ans-1 && nums[i]==ele) return ans;
        }
        return -1;
    }
};