class Solution {
public:
    vector<int>dp=vector<int>(46 , -1);
    int climbStairs(int n) {
        if(dp[n]!=-1) return dp[n];
        if(n==1) return 1;
        else if(n==2) return 2;
        return dp[n]=climbStairs(n-1)+climbStairs(n-2);
    }
};