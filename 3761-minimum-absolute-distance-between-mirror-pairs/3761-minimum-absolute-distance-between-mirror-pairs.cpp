class Solution {
public:
    int reversenum(int num){
        int ans=0;
        while(num){
            int rem=num%10;
            ans = ans*10 + rem;
            num=num/10;
        }
        return ans;
    }
    int minMirrorPairDistance(vector<int>& nums) {
        unordered_map<int,int>freq;
        int mini=INT_MAX;
        for(int i=0; i<nums.size(); i++){
            if(freq.count(nums[i])){
                mini=min(mini , abs(i-freq[nums[i]]));
            }
            int a=reversenum(nums[i]);
            freq[a]=i;
        }
        if(mini==INT_MAX) return -1;
        else return mini;
    }
};