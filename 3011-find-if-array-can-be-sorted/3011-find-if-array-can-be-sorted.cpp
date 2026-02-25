class Solution {
public:
    int setBits(int n){
        int cnt=0;
        while(n){
            if(n%2==1) cnt++;
            n=n/2;
        }
        return cnt;
    }
    bool canSortArray(vector<int>& nums) {
        vector<int>arr=nums;
        sort(arr.begin(), arr.end());
        for(int i=0; i<nums.size(); i++){
            for(int j=0; j<nums.size()-1; j++){
                if(setBits(nums[j])==setBits(nums[j+1]) && nums[j]>nums[j+1]){
                    swap(nums[j] , nums[j+1]);
                }
            }
        }
        return nums==arr;
    }
};