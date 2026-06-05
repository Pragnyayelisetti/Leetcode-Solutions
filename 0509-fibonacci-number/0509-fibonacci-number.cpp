class Solution {
public:
    vector<int>dp=vector<int>(31 , -1);
    int fib(int n) {
        if(dp[n]!=-1) return dp[n];
        if(n==0) return 0;
        else if(n==1) return 1;
        return dp[n]=fib(n-1)+fib(n-2);
    }
};