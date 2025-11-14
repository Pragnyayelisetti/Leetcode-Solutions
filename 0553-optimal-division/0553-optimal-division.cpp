class Solution {
public:
    string optimalDivision(vector<int>& nums) {
        string res = to_string(nums[0]);
        if(nums.size()==1) return res;
        res.push_back('/');
        if(nums.size()==2){
            res+=to_string(nums[1]);
            return res;
        }
        res.push_back('(');
        for(int i=1; i<nums.size()-1; i++){
            res+=to_string(nums[i]);
            res.push_back('/');
        }
        res+=to_string(nums[nums.size()-1]);
        res.push_back(')');
        return res;
    }
};