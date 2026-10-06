class Solution {
public:
    vector<vector<int>>ans;
    void solve(int start, int n, int k, vector<int>&arr){
        if(arr.size()==k){
            ans.push_back(arr);
            return;
        }
        for(int i=start; i<=n; i++){
            arr.push_back(i);
            solve(i+1, n,k,arr);
            arr.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int>arr;
        solve(1,n,k,arr);
        return ans;
    }
};