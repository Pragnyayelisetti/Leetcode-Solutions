class Solution {
public:
    int minimumCost(vector<int>& nums, int k) {
        long long a=k;
        __int128 c=0;
        long long ans=0;
        for(int i=0; i<nums.size(); i++){
            if(a>=nums[i]) a-=nums[i];//3
            else{
                int x=(nums[i]+k-1-a)/k;//3
                c+=x;//5
                //ans=(ans+c)%1000000007;//3
                a=k*x*1LL-nums[i]+a;//
            }
        }
        __int128 b=(1LL*c*(c+1))/2;
        ans=(ans+b)%1000000007;
        return ans;
    }
};