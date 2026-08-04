class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int>arr;
        sort(nums.begin() , nums.end());
        for(int i=1; i<nums.size(); i++){
            if(abs(nums[i]-nums[i-1])==1) continue;
            else{
                for(int j=0; j<nums[i]-nums[i-1]-1; j++){
                    arr.push_back(nums[i-1]+j+1);
                }
            }
        }
        return arr;
    }
};