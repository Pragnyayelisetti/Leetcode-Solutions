class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n=nums.size();
        int maxidx=-1,minidx=-1;
        int maxi=INT_MIN;
        int mini=INT_MAX;
        for(int i=0; i<n; i++){
            if(maxi<nums[i]){
                maxi=nums[i];
                maxidx=i;
            }
            if(mini>nums[i]){
                mini=nums[i];
                minidx=i;
            }
        }
        int ans=maxidx>=minidx ? min(n-minidx , maxidx+1) : min(n-maxidx , minidx+1);
        ans=maxidx>=minidx ? min(ans , minidx+1+n-maxidx) : min(ans, maxidx+1+n-minidx);
        return ans;
    }
};