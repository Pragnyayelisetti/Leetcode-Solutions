class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        vector<int>ans;
        for(int i=0; i<nums.size(); i++){
            int f=0;
            for(int j=0; j<=nums[i]; j++){
                if((j|(j+1))==nums[i]){
                    ans.push_back(j);
                    f=1;
                    break;
                }
            }
            if(f==0) ans.push_back(-1);
        }
        return ans;
    }
};