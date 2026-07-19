class Solution {
public:
    void solve(vector<int>& nums , int i , vector<vector<int>>& arr,vector<int>& a){
        //vector<int>a;
        if(i>=nums.size()){
            arr.push_back(a);
            return;
        }
        a.push_back(nums[i]);
        solve(nums , i+1 , arr,a);
        a.pop_back();
        solve(nums , i+1 , arr,a);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>arr;
        vector<int>a;
        solve(nums , 0 , arr,a);
        return arr;
    }
};