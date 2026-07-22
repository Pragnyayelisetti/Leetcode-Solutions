class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int ,int>freq;
        for(int num:nums) freq[num]++;
        set<int>s(nums.begin() ,  nums.end());
        nums.assign(s.begin() , s.end());
        int maxi=0;
        for(int i=0; i<nums.size()-1; i++){
            if(nums[i+1]-nums[i]==1){
                maxi=max(maxi , freq[nums[i]]+freq[nums[i+1]]);
            }
        }
        return maxi;
    }
};