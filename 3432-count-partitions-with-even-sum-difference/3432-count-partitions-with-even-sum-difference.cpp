class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int s1=nums[0],s2=0;
        for(int i=1; i<nums.size(); i++) s2+=nums[i];
        int cnt=0;
        if((s1-s2)%2==0) cnt++;
        for(int i=1; i<nums.size()-1; i++){
            s1+=nums[i];
            s2-=nums[i];
            if((s1-s2)%2==0) cnt++;
        }
        return cnt;
    }
};