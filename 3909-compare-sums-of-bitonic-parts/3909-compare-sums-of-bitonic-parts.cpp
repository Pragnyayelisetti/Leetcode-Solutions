class Solution {
public:
    int compareBitonicSums(vector<int>& nums) {
        long long sum1=nums[0],sum2=0;
        int f=0;
        for(int i=1; i<nums.size(); i++){
            if(nums[i-1]>nums[i]){
                if(f==1) sum2+=nums[i-1];
                sum2+=nums[i];
                f=0;
            }
            else{
                if(f==0) f=1;
                sum1+=nums[i];
            }
        }
        if(sum1>sum2) return 0;
        else if(sum1<sum2) return 1;
        return -1;
    }
};