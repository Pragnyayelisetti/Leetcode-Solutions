class Solution {
public:
    bool solve(vector<int>& nums, int i, int j, int a, int sum1, int sum2, bool player){
        if(i>j){
            return a=a|sum1>=sum2;
        }
        int x,y;
        if(player){
            x=max(solve(nums,i+1,j,a,sum1+nums[i],sum2,false),solve(nums,i,j-1,a,sum1+nums[j],sum2,false));
            return x;
        }
        else{
            y=min(solve(nums,i+1,j,a,sum1,sum2+nums[i],true),solve(nums,i,j-1,a,sum1,sum2+nums[j],true));
            return y;
        }
    }
    bool predictTheWinner(vector<int>& nums) {
        int i=0;
        int j=nums.size()-1;
        int a=0;
        int sum1=0,sum2=0;
        bool player=true;
        return solve(nums,i,j,a,sum1,sum2,player);
    }
};