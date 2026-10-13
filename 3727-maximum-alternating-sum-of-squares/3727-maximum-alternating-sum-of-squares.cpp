class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        for(int i=0; i<nums.size(); i++){
            if(nums[i]<0){
                nums[i]=-nums[i];
            }
        }
        int n=nums.size();
        sort(nums.rbegin() , nums.rend());
        //3 ,3 ,2 , 2 , 1 , 1
        int a=(n+1)/2;//3
        long long possum=0,negsum=0;
        for(int i=0; i<a; i++){
            possum+=nums[i]*nums[i];
        }
        for(int i=a; i<n; i++){
            negsum+=nums[i]*nums[i];
        }
        return possum-negsum;
    }
};