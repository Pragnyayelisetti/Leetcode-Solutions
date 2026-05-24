class Solution {
public:
    int minimumSwaps(vector<int>& nums) {
        int cnt=0;
        int n=nums.size();
        if(nums.size()==1) return 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==0) cnt++;
        }
        int ans=0;
        for(int i=n-1; i>=n-cnt; i--){
            if(nums[i]!=0) ans++;
        }
        return ans;
    }
};