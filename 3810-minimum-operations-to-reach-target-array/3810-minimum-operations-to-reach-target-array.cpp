class Solution {
public:
    int minOperations(vector<int>& nums, vector<int>& target) {
        int cnt=0;
        unordered_map<int,int>freq;
        for(int i=0; i<nums.size(); i++){
            freq[nums[i]]++;
            if(nums[i]==target[i]){
                freq[nums[i]]--;
            }
            if(freq[nums[i]]==1 && nums[i]!=target[i]) cnt++;
        }
        return cnt;
    }
};