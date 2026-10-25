class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        //n*(n+1)/2
        int start=0;
        long long cnt=0;
        for(int end=0; end<nums.size(); end++){
            if(nums[end]<minK || nums[end]>maxK){
                int n=end-start;
                cnt+=(long long)n*(n+1)/2;
                start=end+1;
            }
        }
        int n=nums.size()-start;
        cnt+=(long long)n*(n+1)/2;
        return cnt;
    }
};