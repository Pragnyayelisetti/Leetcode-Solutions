class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        long long sum=0;
        for(int num:nums) sum+=num;
        long long a=0,b=0;
        long long mini=LLONG_MAX;
        long long ans=-1;
        for(int i=0; i<nums.size(); i++){
            a+=nums[i];
            b=sum-a;
            long long avg1=a/(i+1);
            long long avg2=0;
            if(i==nums.size()-1) avg2=0;
            else avg2=b/(nums.size()-(i+1));
            long long diff=abs(avg1-avg2);
            if(diff<mini){
                mini=diff;
                ans=i;
            }
        }
        return ans;
    }
};