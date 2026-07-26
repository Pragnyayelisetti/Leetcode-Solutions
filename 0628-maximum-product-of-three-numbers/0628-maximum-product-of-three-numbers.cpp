class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int promax1=nums[nums.size()-1]*nums[nums.size()-2]*nums[nums.size()-3];
        int promax2=nums[0]*nums[1]*nums[nums.size()-1];
        if(promax1>promax2){
            return promax1;
        }
        return promax2;
    }
};