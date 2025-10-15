class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int leftsum=0;
        int rightsum=0;
        for(int i=1; i<nums.size(); i++){
            rightsum+=nums[i];
        }
        vector<int>ans;
        int a=(nums.size()-1)*nums[0];
        ans.push_back(abs(a-rightsum));
        for(int i=1; i<nums.size(); i++){
            leftsum+=nums[i-1];
            rightsum-=nums[i];
            int x=abs(i*nums[i]-leftsum);
            int p=(nums.size()-i-1)*nums[i];
            int y=abs(p-rightsum);
            ans.push_back(x+y);
        }
        return ans;
    }
};