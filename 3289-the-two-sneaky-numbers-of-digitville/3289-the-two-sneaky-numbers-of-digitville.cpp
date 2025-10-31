class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int>arr;
        unordered_map<int,int>freq;
        for(int num : nums) freq[num]++;
        for(auto it:freq){
            if(it.second==2) arr.push_back(it.first);
        }
        return arr;
    }
};