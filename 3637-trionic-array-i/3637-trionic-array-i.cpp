class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int p=0;
        for(int i=0; i<nums.size()-1; i++){
            if(nums[i]>=nums[i+1]){
                p=i;
                break;
            }
        }
        if(p==0 || p==nums.size()) return false;
        int q=0;
        for(int i=p ; i<nums.size()-1; i++){
            if(nums[i]<=nums[i+1]){
                q=i;
                break;
            }
        }
        if(p==q || q==nums.size()) return false;
        for(int i=q; i<nums.size()-1; i++){
            if(nums[i]>=nums[i+1]){
                return false;
            }
        }
        return true;
    }
};