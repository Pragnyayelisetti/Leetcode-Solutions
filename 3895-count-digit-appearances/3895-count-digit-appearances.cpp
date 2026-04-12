class Solution {
public:
    int appearance(int n,int digit){
        int cnt=0;
        while(n>0){
            if(n%10==digit) cnt++;
            n=n/10;
        }
        return cnt;
    }
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int ans=0;
        for(int i=0; i<nums.size(); i++){
            ans+=appearance(nums[i],digit);
        }
        return ans;
    }
};