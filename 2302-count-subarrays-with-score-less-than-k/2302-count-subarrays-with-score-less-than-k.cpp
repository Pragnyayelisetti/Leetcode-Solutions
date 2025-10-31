class Solution {
public:
    long long countSubarrays(vector<int>& nums, long long k) {
        long long cnt=0;
        long long sum=0;
        int start=0;
        for(int end=0; end<nums.size(); end++){
            if(nums[end]<k) cnt++;//1
            sum += nums[end];//3
            if(sum*(end-start+1)<k && (end-start+1)>1) cnt++;//2
            while(sum*(end-start+1)>=k){
                sum-=nums[start];
                start++;
                if(sum*(end-start+1)<k && (end-start+1)>1) cnt++;
            }
        }
        return cnt;
    }
};