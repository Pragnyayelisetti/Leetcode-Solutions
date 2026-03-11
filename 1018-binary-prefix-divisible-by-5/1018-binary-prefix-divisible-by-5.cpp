class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        vector<bool>arr(nums.size() , false);
        int j=0;
        long long sum=0;
        reverse(nums.begin() , nums.end());
        for(int i=nums.size()-1; i>=0; i--){
            sum = (sum*2 + nums[i])%5;
            j++;
            if(sum==0) arr[i]=true;
        }
        reverse(arr.begin() , arr.end());
        return arr;
    }
};