class Solution {
public:
    bool check(vector<int>& nums) {
        int n=nums.size();
        for(int i=0; i<n; i++){
            int cnt=i;
            int f=0,c=0;
            while(c<n-1){
                if(nums[cnt]>nums[(cnt+1)%n]){
                    f=1;
                    break;
                }
                cnt=(cnt+1)%n;
                c++;
            }
            if(f==0) return true;
        }
        return false;
    }
};