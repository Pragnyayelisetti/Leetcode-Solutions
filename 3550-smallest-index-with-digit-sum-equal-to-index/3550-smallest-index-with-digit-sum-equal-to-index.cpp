class Solution {
public:
    int ans(int n){
        int sum=0;
        while(n>0){
            int rem=n%10;
            sum+=rem;
            n=n/10;
        }
        return sum;
    }
    int smallestIndex(vector<int>& nums) {
        for(int i=0; i<nums.size(); i++){
            if(i==ans(nums[i])) return i;
        }
        return -1;
    }
};