class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        for(int i=0; i<nums.size(); i++){
            unordered_set<int>s(nums[i].begin() , nums[i].end());
            nums[i].assign(s.begin() , s.end());
        }
        unordered_map<int,int>freq;
        for(int i=0; i<nums.size(); i++){
            for(int j=0; j<nums[i].size(); j++){
                freq[nums[i][j]]++;
            }
        }
        vector<int>ans;
        for(auto it:freq){
            if(it.second==nums.size()) ans.push_back(it.first);
        }
        sort(ans.begin() , ans.end());
        return ans;
    }
};