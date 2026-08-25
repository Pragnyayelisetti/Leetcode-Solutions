class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int>uni(nums.begin() , nums.end());
        int i=1;
        while(1){
            if(uni.find(k*i)==uni.end()) return k*i;
            i++;
        }
        return 0;
    }
};