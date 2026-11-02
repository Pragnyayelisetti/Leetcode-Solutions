class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        int sum1=0,sum2=0;
        sort(nums.begin(),nums.end());
        int f=0;
        if(n%2!=0){
            f=1;
            int idx=(n+1)/2;
            int res=nums[idx-1];
            for(int i=0; i<nums.size(); i++){
                sum += abs(res-nums[i]);
            }
        }
        else{
            int idx=n/2;
            int res=nums[idx];
            int res1=nums[idx-1];
            for(int i=0; i<n; i++){
                sum1 += abs(res-nums[i]);
                sum2 += abs(res1-nums[i]);
            }
        }
        if(f==0){
            if(sum1>sum2){
                return sum2;
            }
            else return sum1;
        }
        else return sum;
    }
};