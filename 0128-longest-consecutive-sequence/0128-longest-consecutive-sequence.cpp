class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int ans=0,cnt=1;
        unordered_set<int>uni(nums.begin() , nums.end());
        nums.assign(uni.begin() , uni.end());
        sort(nums.begin() , nums.end());
        //0 , 1 , 2 ,3 , 4 , 5 , 6 , 7 , 8
        for(int i=0; i<nums.size()-1; i++){
            if(nums[i]+1==nums[i+1]) cnt++;//2
            else{
                ans=max(ans , cnt);//4
                cnt=1;
            }
        }
        ans=max(ans,cnt);
        return ans;
    }
};