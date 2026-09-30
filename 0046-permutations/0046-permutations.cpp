class Solution {
public:
    vector<vector<int>>arr;
    vector<int>a;
    void solve(vector<int>& nums, int i, vector<bool>& used){
        if(i>=nums.size()){
            arr.push_back(a);
            return;
        }
        for(int j=0; j<nums.size(); j++){
            if(used[j]) continue;
            a.push_back(nums[j]);
            used[j]=true;
            solve(nums, i+1, used);
            used[j]=false;
            a.pop_back();
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<bool>used(nums.size(), false);
        solve(nums, 0, used);
        return arr;
    }
};