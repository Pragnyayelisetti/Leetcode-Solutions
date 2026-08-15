class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int cnt=0;
        int c=0;
        for(int i=0; i<=nums.size()-1; i++){
            c=c^nums[i];
            if(c==0) cnt++;
        }
        if(cnt!=0) return nums.size();
        else if(cnt==nums.size()) return 0;
        return nums.size()-1;
    }
};